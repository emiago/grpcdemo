
build: proto 

proto:
	protoc --proto_path ../../../ -I api/ api/toyshop.proto --go_out=plugins=grpc:api
	mkdir -p api/cpp 
	protoc --proto_path ../../../ -I api/ api/toyshop.proto --cpp_out=api/cpp
	mkdir -p api/js 
	protoc --proto_path ../../../ -I api/ api/toyshop.proto --js_out=api/js


compile:
	