package main

/*
	Example of some contact center server, where you can listen
	on Agents and Queues
*/

import (

	// "log"
	"context"
	"database/sql"
	"fmt"
	"net"

	"github.com/emiraganov/pubsub"

	// pb "github.com/emiraganov/pubsub/example/grpcserver/toyshop"
	pb "naontekrest/api"

	log "github.com/sirupsen/logrus"
	"google.golang.org/grpc"
	"google.golang.org/grpc/codes"
	"google.golang.org/grpc/status"

	_ "github.com/go-sql-driver/mysql"
)

const (
	port = ":50051"
)

var (
	subpool *pubsub.Pool
	dbconf  *DbConf
)

const DB_TYPE = "mysql" //CHANGE WHATEVER SQL BASED DATABASE YOU WANTs

type DbConf struct {
	Adress   string
	Port     int
	User     string
	Password string
	Database string
	Active   bool
}

// server is used to implement helloworld.GreeterServer.
type ToyShopServer struct {
	db *sql.DB
}

func (s *ToyShopServer) GetToy(ctx context.Context, req *pb.ToyId) (*pb.Toy, error) {
	//CAN BE ADDED MORE FILTERING STUFF by brand, category.

	t := pb.Toy{}
	err := s.db.QueryRow("SELECT id,brand,model,category,description,price,imageurl FROM toys WHERE id = ?", req.Id).Scan(&t.Id, &t.Brand, &t.Model, &t.Category, &t.Description, &t.Price, &t.Imageurl)

	if err != nil {
		return nil, status.Error(codes.InvalidArgument, err.Error())
	}

	return &t, nil
}
func (s *ToyShopServer) CreateToy(ctx context.Context, t *pb.Toy) (*pb.ToyId, error) {
	res, err := s.db.Exec("INSERT INTO toys(brand,model,category,description,price,imageurl) VALUES(?, ?, ?, ?, ?, ?)", t.Brand, t.Model, t.Category, t.Description, t.Price, t.Imageurl)

	if err != nil {
		return nil, status.Error(codes.Internal, err.Error())
	}

	id, err := res.LastInsertId()
	if err != nil {
		return nil, status.Error(codes.Internal, err.Error())
	}

	return &pb.ToyId{Id: id}, nil
}
func (s *ToyShopServer) UpdateToy(ctx context.Context, t *pb.Toy) (*pb.Empty, error) {
	_, err := s.db.Exec("REPLACE INTO toys(id, brand,model,category,description,price,imageurl) VALUES(?, ?, ?, ?, ?, ?, ?)", t.Id, t.Brand, t.Model, t.Category, t.Description, t.Price, t.Imageurl)

	if err != nil {
		return nil, status.Error(codes.Internal, err.Error())
	}
	return &pb.Empty{}, nil
}
func (s *ToyShopServer) DeleteToy(ctx context.Context, t *pb.ToyId) (*pb.Empty, error) {
	_, err := s.db.Exec("DELETE FROM toys WHERE id = ?", t.Id)
	if err != nil {
		return nil, status.Error(codes.Internal, err.Error())
	}
	return &pb.Empty{}, nil
}

func init() {
	dbconf = &DbConf{
		Adress:   "localhost",
		Port:     3306,
		User:     "test",
		Password: "test123",
		Database: "test",
		Active:   true,
	}
}

func main() {
	socket := fmt.Sprintf("tcp(%s:%d)", dbconf.Adress, dbconf.Port)
	db, err := sql.Open(DB_TYPE, fmt.Sprintf("%s:%s@%s/%s", dbconf.User, dbconf.Password, socket, dbconf.Database))
	if err != nil {
		log.WithError(err).Fatalf("Failed to connect %s", DB_TYPE)
	}
	if err = db.Ping(); err != nil {
		log.WithError(err).Fatalf("Failed to ping %s", DB_TYPE)
	}
	defer db.Close()
	// db.SetMaxOpenConns(20)
	// db.SetMaxIdleConns(2)
	if err := CreateTables(db); err != nil {
		log.Fatal(err)
	}

	lis, err := net.Listen("tcp", port)
	if err != nil {
		log.Fatalf("failed to listen: %v", err)
	}
	s := grpc.NewServer()
	pb.RegisterToyShopServer(s, &ToyShopServer{
		db: db,
	})

	log.Info("Server listening")
	if err := s.Serve(lis); err != nil {
		log.Fatalf("failed to serve: %v", err)
	}
}

func CreateTables(db *sql.DB) error {
	q := "CREATE TABLE IF NOT EXISTS toys"
	q += "("
	q += "	id INT PRIMARY KEY AUTO_INCREMENT,"
	q += "	brand VARCHAR(20) DEFAULT '' NOT NULL,"
	q += "	model VARCHAR(20) DEFAULT '' NOT NULL,"
	q += "	category VARCHAR(20) DEFAULT '' NOT NULL,"
	q += "	description TEXT NOT NULL,"
	q += "	price FLOAT DEFAULT 0 NOT NULL,"
	q += "	imageurl TEXT NOT NULL,"
	q += "	INDEX(brand)"
	q += ") ENGINE=InnoDB"

	_, err := db.Exec(q)

	return err
}
