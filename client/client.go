/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// Package main implements a client for Greeter service.
package main

import (
	"context"
	"log"
	"time"

	pb "naontekrest/api"

	"google.golang.org/grpc"
)

const (
	address     = "localhost:50051"
	defaultName = "world"
)

func main() {
	// Set up a connection to the server.
	conn, err := grpc.Dial(address, grpc.WithInsecure())
	if err != nil {
		log.Fatalf("did not connect: %v", err)
	}
	defer conn.Close()
	c := pb.NewToyShopClient(conn)

	ctx, cancel := context.WithTimeout(context.Background(), 5*time.Second)
	defer cancel()

	t := &pb.Toy{
		Brand:       "Audi",
		Category:    "Car",
		Description: "Audi Car",
	}

	//CREATE
	log.Println("CREATE")
	res, err := c.CreateToy(ctx, t)
	if err != nil {
		log.Fatal(err)
	}

	//GET
	log.Println("GET", res)
	c.GetToy(ctx, res)

	//UPDATE
	log.Println("UPDATE")
	t.Description = "Toy Audi car"
	c.UpdateToy(ctx, t)

	//DELETE
	log.Println("DELETE")
	c.DeleteToy(ctx, res)
}
