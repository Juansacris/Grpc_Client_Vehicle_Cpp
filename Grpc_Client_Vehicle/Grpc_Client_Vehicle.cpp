// Grpc_Client_Vehicle.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "vehicle.grpc.pb.h"
#include <grpc++/grpc++.h>
#include <memory>
#include <iostream>


using namespace grpc;


class VehicleClient 
{
public:
	VehicleClient(std::shared_ptr<Channel> channel) : _stub{ vehicle::Vehicle::NewStub(channel)} {}

	void VehicleGetVehicle(const vehicle::Request request)
	{		
		//create an RPC object
		vehicle::QueryResponse response;
		ClientContext context;
		CompletionQueue _queue;
		Status status;
		std::unique_ptr<ClientAsyncResponseReader<vehicle::VehicleModel>> rpc;

		status = _stub->GetAll(&context, request, &response );
		
		if (status.ok())
		{
			std::cout << "Founded:" << std::endl;
			vehicle::VehicleModel items;
			std::cout << response.results_size() << std::endl;

			
			
		
			//Leo la respuesta que esta compuesta por id, model, manufacturer y modelYear
		}
		else
		{
			throw std::runtime_error(std::to_string(status.error_code()) + ":" + status.error_message());
		}
			
	}
    
private:
	std::unique_ptr<vehicle::Vehicle::Stub> _stub;

	
};

void RunClient()
{
	std::string server_addres{ "127.0.0.1:5113" };
	VehicleClient client{ grpc::CreateChannel(server_addres, grpc::InsecureChannelCredentials()) };
	vehicle::Request request;
	std::string id;
	std::cout << "Busqueda por ID:";
	std::cin >> id;
	request.set_query(id);
	
	client.VehicleGetVehicle(request);

}



int main(int argc, char** argv)
{
	RunClient();
	return 0;		
}