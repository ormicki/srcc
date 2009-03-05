#include "Server.h"


int main(int argc, char* argv[]){

   // getopt port to run and provide it to start class

  Server::getInstance()->run(6500);
  
  return 0;
  
}



















