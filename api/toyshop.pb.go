// Code generated by protoc-gen-go. DO NOT EDIT.
// source: toyshop.proto

package api

import (
	context "context"
	fmt "fmt"
	proto "github.com/golang/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	math "math"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion3 // please upgrade the proto package

type Empty struct {
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Empty) Reset()         { *m = Empty{} }
func (m *Empty) String() string { return proto.CompactTextString(m) }
func (*Empty) ProtoMessage()    {}
func (*Empty) Descriptor() ([]byte, []int) {
	return fileDescriptor_3c4c4a3297c35179, []int{0}
}

func (m *Empty) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Empty.Unmarshal(m, b)
}
func (m *Empty) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Empty.Marshal(b, m, deterministic)
}
func (m *Empty) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Empty.Merge(m, src)
}
func (m *Empty) XXX_Size() int {
	return xxx_messageInfo_Empty.Size(m)
}
func (m *Empty) XXX_DiscardUnknown() {
	xxx_messageInfo_Empty.DiscardUnknown(m)
}

var xxx_messageInfo_Empty proto.InternalMessageInfo

type ToyId struct {
	Id                   int64    `protobuf:"varint,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *ToyId) Reset()         { *m = ToyId{} }
func (m *ToyId) String() string { return proto.CompactTextString(m) }
func (*ToyId) ProtoMessage()    {}
func (*ToyId) Descriptor() ([]byte, []int) {
	return fileDescriptor_3c4c4a3297c35179, []int{1}
}

func (m *ToyId) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_ToyId.Unmarshal(m, b)
}
func (m *ToyId) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_ToyId.Marshal(b, m, deterministic)
}
func (m *ToyId) XXX_Merge(src proto.Message) {
	xxx_messageInfo_ToyId.Merge(m, src)
}
func (m *ToyId) XXX_Size() int {
	return xxx_messageInfo_ToyId.Size(m)
}
func (m *ToyId) XXX_DiscardUnknown() {
	xxx_messageInfo_ToyId.DiscardUnknown(m)
}

var xxx_messageInfo_ToyId proto.InternalMessageInfo

func (m *ToyId) GetId() int64 {
	if m != nil {
		return m.Id
	}
	return 0
}

type Toy struct {
	Id                   int64    `protobuf:"varint,1,opt,name=id,proto3" json:"id,omitempty"`
	Brand                string   `protobuf:"bytes,2,opt,name=brand,proto3" json:"brand,omitempty"`
	Model                string   `protobuf:"bytes,3,opt,name=model,proto3" json:"model,omitempty"`
	Category             string   `protobuf:"bytes,4,opt,name=category,proto3" json:"category,omitempty"`
	Description          string   `protobuf:"bytes,5,opt,name=description,proto3" json:"description,omitempty"`
	Price                float32  `protobuf:"fixed32,6,opt,name=price,proto3" json:"price,omitempty"`
	Imageurl             string   `protobuf:"bytes,7,opt,name=imageurl,proto3" json:"imageurl,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *Toy) Reset()         { *m = Toy{} }
func (m *Toy) String() string { return proto.CompactTextString(m) }
func (*Toy) ProtoMessage()    {}
func (*Toy) Descriptor() ([]byte, []int) {
	return fileDescriptor_3c4c4a3297c35179, []int{2}
}

func (m *Toy) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_Toy.Unmarshal(m, b)
}
func (m *Toy) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_Toy.Marshal(b, m, deterministic)
}
func (m *Toy) XXX_Merge(src proto.Message) {
	xxx_messageInfo_Toy.Merge(m, src)
}
func (m *Toy) XXX_Size() int {
	return xxx_messageInfo_Toy.Size(m)
}
func (m *Toy) XXX_DiscardUnknown() {
	xxx_messageInfo_Toy.DiscardUnknown(m)
}

var xxx_messageInfo_Toy proto.InternalMessageInfo

func (m *Toy) GetId() int64 {
	if m != nil {
		return m.Id
	}
	return 0
}

func (m *Toy) GetBrand() string {
	if m != nil {
		return m.Brand
	}
	return ""
}

func (m *Toy) GetModel() string {
	if m != nil {
		return m.Model
	}
	return ""
}

func (m *Toy) GetCategory() string {
	if m != nil {
		return m.Category
	}
	return ""
}

func (m *Toy) GetDescription() string {
	if m != nil {
		return m.Description
	}
	return ""
}

func (m *Toy) GetPrice() float32 {
	if m != nil {
		return m.Price
	}
	return 0
}

func (m *Toy) GetImageurl() string {
	if m != nil {
		return m.Imageurl
	}
	return ""
}

func init() {
	proto.RegisterType((*Empty)(nil), "api.Empty")
	proto.RegisterType((*ToyId)(nil), "api.ToyId")
	proto.RegisterType((*Toy)(nil), "api.Toy")
}

func init() { proto.RegisterFile("toyshop.proto", fileDescriptor_3c4c4a3297c35179) }

var fileDescriptor_3c4c4a3297c35179 = []byte{
	// 287 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x74, 0x91, 0xdf, 0x4a, 0x33, 0x31,
	0x10, 0xc5, 0x9b, 0xdd, 0x6f, 0xfb, 0x67, 0x3e, 0xf4, 0x22, 0x14, 0x0c, 0xbd, 0x5a, 0x56, 0x84,
	0x5e, 0xed, 0x85, 0x3e, 0x81, 0x55, 0x11, 0xef, 0x4a, 0xad, 0x0f, 0x90, 0x6e, 0x86, 0x36, 0xb0,
	0xdb, 0x19, 0xd2, 0x08, 0xe6, 0x5d, 0x7c, 0x09, 0xdf, 0x50, 0xb2, 0xa1, 0xa5, 0x0a, 0xde, 0xe5,
	0x9c, 0xf3, 0xe3, 0x84, 0x99, 0x81, 0x0b, 0x4f, 0xe1, 0xb0, 0x23, 0xae, 0xd9, 0x91, 0x27, 0x99,
	0x6b, 0xb6, 0xd5, 0x08, 0x8a, 0xa7, 0x8e, 0x7d, 0xa8, 0xae, 0xa0, 0x58, 0x53, 0x78, 0x31, 0xf2,
	0x12, 0x32, 0x6b, 0x94, 0x28, 0xc5, 0x3c, 0x5f, 0x65, 0xd6, 0x54, 0x5f, 0x02, 0xf2, 0x35, 0x85,
	0xdf, 0xbe, 0x9c, 0x42, 0xb1, 0x71, 0x7a, 0x6f, 0x54, 0x56, 0x8a, 0xf9, 0x64, 0x95, 0x44, 0x74,
	0x3b, 0x32, 0xd8, 0xaa, 0x3c, 0xb9, 0xbd, 0x90, 0x33, 0x18, 0x37, 0xda, 0xe3, 0x96, 0x5c, 0x50,
	0xff, 0xfa, 0xe0, 0xa4, 0x65, 0x09, 0xff, 0x0d, 0x1e, 0x1a, 0x67, 0xd9, 0x5b, 0xda, 0xab, 0xa2,
	0x8f, 0xcf, 0xad, 0xd8, 0xc9, 0xce, 0x36, 0xa8, 0x86, 0xa5, 0x98, 0x67, 0xab, 0x24, 0x62, 0xa7,
	0xed, 0xf4, 0x16, 0xdf, 0x5d, 0xab, 0x46, 0xa9, 0xf3, 0xa8, 0x6f, 0x3f, 0x05, 0x8c, 0xd6, 0x14,
	0x5e, 0x77, 0xc4, 0xb2, 0x84, 0xe1, 0x33, 0xfa, 0x38, 0x01, 0xd4, 0x9a, 0x6d, 0xdd, 0x4f, 0x39,
	0x1b, 0x1f, 0xdf, 0xd5, 0x40, 0x5e, 0xc3, 0xe4, 0xc1, 0xa1, 0xf6, 0x18, 0xa1, 0x53, 0x30, 0x3b,
	0xc3, 0x13, 0xf4, 0xc6, 0xe6, 0x0f, 0x28, 0xad, 0x70, 0x20, 0x6f, 0x60, 0xf2, 0x88, 0x2d, 0x26,
	0xe8, 0xfc, 0xbb, 0x1f, 0xd8, 0xa2, 0x82, 0xa9, 0xa5, 0x7a, 0xeb, 0xb8, 0xa9, 0xf1, 0x43, 0x77,
	0xdc, 0xe2, 0x21, 0xe6, 0x8b, 0xf1, 0x3d, 0xdb, 0x65, 0xbc, 0xcd, 0x52, 0x6c, 0x86, 0xfd, 0x91,
	0xee, 0xbe, 0x03, 0x00, 0x00, 0xff, 0xff, 0x0e, 0x26, 0x2b, 0xe6, 0xb5, 0x01, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// ToyShopClient is the client API for ToyShop service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type ToyShopClient interface {
	GetToy(ctx context.Context, in *ToyId, opts ...grpc.CallOption) (*Toy, error)
	CreateToy(ctx context.Context, in *Toy, opts ...grpc.CallOption) (*ToyId, error)
	UpdateToy(ctx context.Context, in *Toy, opts ...grpc.CallOption) (*Empty, error)
	DeleteToy(ctx context.Context, in *ToyId, opts ...grpc.CallOption) (*Empty, error)
}

type toyShopClient struct {
	cc *grpc.ClientConn
}

func NewToyShopClient(cc *grpc.ClientConn) ToyShopClient {
	return &toyShopClient{cc}
}

func (c *toyShopClient) GetToy(ctx context.Context, in *ToyId, opts ...grpc.CallOption) (*Toy, error) {
	out := new(Toy)
	err := c.cc.Invoke(ctx, "/api.ToyShop/GetToy", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *toyShopClient) CreateToy(ctx context.Context, in *Toy, opts ...grpc.CallOption) (*ToyId, error) {
	out := new(ToyId)
	err := c.cc.Invoke(ctx, "/api.ToyShop/CreateToy", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *toyShopClient) UpdateToy(ctx context.Context, in *Toy, opts ...grpc.CallOption) (*Empty, error) {
	out := new(Empty)
	err := c.cc.Invoke(ctx, "/api.ToyShop/UpdateToy", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *toyShopClient) DeleteToy(ctx context.Context, in *ToyId, opts ...grpc.CallOption) (*Empty, error) {
	out := new(Empty)
	err := c.cc.Invoke(ctx, "/api.ToyShop/DeleteToy", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// ToyShopServer is the server API for ToyShop service.
type ToyShopServer interface {
	GetToy(context.Context, *ToyId) (*Toy, error)
	CreateToy(context.Context, *Toy) (*ToyId, error)
	UpdateToy(context.Context, *Toy) (*Empty, error)
	DeleteToy(context.Context, *ToyId) (*Empty, error)
}

// UnimplementedToyShopServer can be embedded to have forward compatible implementations.
type UnimplementedToyShopServer struct {
}

func (*UnimplementedToyShopServer) GetToy(ctx context.Context, req *ToyId) (*Toy, error) {
	return nil, status.Errorf(codes.Unimplemented, "method GetToy not implemented")
}
func (*UnimplementedToyShopServer) CreateToy(ctx context.Context, req *Toy) (*ToyId, error) {
	return nil, status.Errorf(codes.Unimplemented, "method CreateToy not implemented")
}
func (*UnimplementedToyShopServer) UpdateToy(ctx context.Context, req *Toy) (*Empty, error) {
	return nil, status.Errorf(codes.Unimplemented, "method UpdateToy not implemented")
}
func (*UnimplementedToyShopServer) DeleteToy(ctx context.Context, req *ToyId) (*Empty, error) {
	return nil, status.Errorf(codes.Unimplemented, "method DeleteToy not implemented")
}

func RegisterToyShopServer(s *grpc.Server, srv ToyShopServer) {
	s.RegisterService(&_ToyShop_serviceDesc, srv)
}

func _ToyShop_GetToy_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ToyId)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(ToyShopServer).GetToy(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/api.ToyShop/GetToy",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(ToyShopServer).GetToy(ctx, req.(*ToyId))
	}
	return interceptor(ctx, in, info, handler)
}

func _ToyShop_CreateToy_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(Toy)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(ToyShopServer).CreateToy(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/api.ToyShop/CreateToy",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(ToyShopServer).CreateToy(ctx, req.(*Toy))
	}
	return interceptor(ctx, in, info, handler)
}

func _ToyShop_UpdateToy_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(Toy)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(ToyShopServer).UpdateToy(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/api.ToyShop/UpdateToy",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(ToyShopServer).UpdateToy(ctx, req.(*Toy))
	}
	return interceptor(ctx, in, info, handler)
}

func _ToyShop_DeleteToy_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(ToyId)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(ToyShopServer).DeleteToy(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/api.ToyShop/DeleteToy",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(ToyShopServer).DeleteToy(ctx, req.(*ToyId))
	}
	return interceptor(ctx, in, info, handler)
}

var _ToyShop_serviceDesc = grpc.ServiceDesc{
	ServiceName: "api.ToyShop",
	HandlerType: (*ToyShopServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "GetToy",
			Handler:    _ToyShop_GetToy_Handler,
		},
		{
			MethodName: "CreateToy",
			Handler:    _ToyShop_CreateToy_Handler,
		},
		{
			MethodName: "UpdateToy",
			Handler:    _ToyShop_UpdateToy_Handler,
		},
		{
			MethodName: "DeleteToy",
			Handler:    _ToyShop_DeleteToy_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "toyshop.proto",
}
