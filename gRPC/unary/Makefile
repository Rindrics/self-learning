OUTDIR=api/gen/api

.PHONY: gen
gen: proto
	protoc -Iproto --go_out=$(OUTDIR) --go_opt=paths=source_relative proto/*.proto
	protoc -Iproto --go-grpc_out=$(OUTDIR) --go-grpc_opt=paths=source_relative proto/*.proto

.PHONY: deps
deps:
	go install google.golang.org/protobuf/cmd/protoc-gen-go@latest
	go install google.golang.org/grpc/cmd/protoc-gen-go-grpc@latest
