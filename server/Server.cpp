#include "Server.h"

Server::Server(){
  FEAR("Panie tu sie dopiero buduje\n");
}

void Server::run(int port_number){
  this->port = port_number;
  printf("Running on port: %d \n", this->port );
  PANIC(-1, "No to w zasadzie lipa na porcie %d \n", this->port);
}