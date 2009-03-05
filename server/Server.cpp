/*
* Document-class:  Server
*
* Implementation of Server class interface (methods)
* file: Server.cpp
* author: JO
*/

#include "Server.h"

Server::Server(){
  
  //assign basic things
  
  FEAR("Panie tu sie dopiero buduje\n");
}

void Server::run(int port_number){
  this->port = port_number;
  printf("Running on port: %d \n", this->port );
  
  
  // listen on port
  
  
  // HI I'M WORKER => :worker
  // HI I'M CLIENT => :client
  // *random* => :outlaw 
  // :outlaw => lolcode_him! 
  
  // if accept decide {:client => provide_cloud_for_client , :worker => add_to_worker_pool}
  
  // provide_cloud_for_client
  //   fork => 
  //     clone_worker_pool
  //     recive_package
  //     assign_work_to_workers
  //     recive_work_from_workers
  //     send_output_to_client
  
  // repeat
  
  
  PANIC(-1, "No to w zasadzie lipa na porcie %d \n", this->port);
}