#include "Client.h"


int main(int argc, char* argv[]){

   // getopt server address to run and provide it to start class

  Client::getInstance()->run("192.168.1.1:6000");
  
  return 0;
  
}