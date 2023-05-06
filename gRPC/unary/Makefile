OUTDIR=api/gen/api

.PHONY: gen
gen: proto
	protoc -Iproto --go_out=$(OUTDIR) --go_opt=paths=source_relative proto/*.proto
	protoc -Iproto --go-grpc_out=$(OUTDIR) --go-grpc_opt=paths=source_relative proto/*.proto
