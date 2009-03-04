#include "Client.h"

Client::Client(){
  FEAR("Panie tu sie dopiero buduje\n");
}

void Client::run(char* server_name){
  PANIC(-1, "No to powinnem sie polaczyc z %s i cos podzialac\n", server_name);
}