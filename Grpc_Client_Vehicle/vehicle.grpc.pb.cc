// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: vehicle.proto

#include "vehicle.pb.h"
#include "vehicle.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace vehicle {

static const char* Vehicle_method_names[] = {
  "/vehicle.Vehicle/GetVehicle",
  "/vehicle.Vehicle/GetAll",
};

std::unique_ptr< Vehicle::Stub> Vehicle::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Vehicle::Stub> stub(new Vehicle::Stub(channel, options));
  return stub;
}

Vehicle::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetVehicle_(Vehicle_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAll_(Vehicle_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Vehicle::Stub::GetVehicle(::grpc::ClientContext* context, const ::vehicle::SingleRequest& request, ::vehicle::VehicleModel* response) {
  return ::grpc::internal::BlockingUnaryCall< ::vehicle::SingleRequest, ::vehicle::VehicleModel, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetVehicle_, context, request, response);
}

void Vehicle::Stub::async::GetVehicle(::grpc::ClientContext* context, const ::vehicle::SingleRequest* request, ::vehicle::VehicleModel* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::vehicle::SingleRequest, ::vehicle::VehicleModel, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetVehicle_, context, request, response, std::move(f));
}

void Vehicle::Stub::async::GetVehicle(::grpc::ClientContext* context, const ::vehicle::SingleRequest* request, ::vehicle::VehicleModel* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetVehicle_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::vehicle::VehicleModel>* Vehicle::Stub::PrepareAsyncGetVehicleRaw(::grpc::ClientContext* context, const ::vehicle::SingleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::vehicle::VehicleModel, ::vehicle::SingleRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetVehicle_, context, request);
}

::grpc::ClientAsyncResponseReader< ::vehicle::VehicleModel>* Vehicle::Stub::AsyncGetVehicleRaw(::grpc::ClientContext* context, const ::vehicle::SingleRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetVehicleRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Vehicle::Stub::GetAll(::grpc::ClientContext* context, const ::vehicle::Request& request, ::vehicle::QueryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::vehicle::Request, ::vehicle::QueryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetAll_, context, request, response);
}

void Vehicle::Stub::async::GetAll(::grpc::ClientContext* context, const ::vehicle::Request* request, ::vehicle::QueryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::vehicle::Request, ::vehicle::QueryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetAll_, context, request, response, std::move(f));
}

void Vehicle::Stub::async::GetAll(::grpc::ClientContext* context, const ::vehicle::Request* request, ::vehicle::QueryResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetAll_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::vehicle::QueryResponse>* Vehicle::Stub::PrepareAsyncGetAllRaw(::grpc::ClientContext* context, const ::vehicle::Request& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::vehicle::QueryResponse, ::vehicle::Request, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetAll_, context, request);
}

::grpc::ClientAsyncResponseReader< ::vehicle::QueryResponse>* Vehicle::Stub::AsyncGetAllRaw(::grpc::ClientContext* context, const ::vehicle::Request& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetAllRaw(context, request, cq);
  result->StartCall();
  return result;
}

Vehicle::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Vehicle_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Vehicle::Service, ::vehicle::SingleRequest, ::vehicle::VehicleModel, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Vehicle::Service* service,
             ::grpc::ServerContext* ctx,
             const ::vehicle::SingleRequest* req,
             ::vehicle::VehicleModel* resp) {
               return service->GetVehicle(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Vehicle_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Vehicle::Service, ::vehicle::Request, ::vehicle::QueryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Vehicle::Service* service,
             ::grpc::ServerContext* ctx,
             const ::vehicle::Request* req,
             ::vehicle::QueryResponse* resp) {
               return service->GetAll(ctx, req, resp);
             }, this)));
}

Vehicle::Service::~Service() {
}

::grpc::Status Vehicle::Service::GetVehicle(::grpc::ServerContext* context, const ::vehicle::SingleRequest* request, ::vehicle::VehicleModel* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Vehicle::Service::GetAll(::grpc::ServerContext* context, const ::vehicle::Request* request, ::vehicle::QueryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace vehicle

