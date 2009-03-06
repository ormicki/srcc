#include "Client.h"


int main(int argc, char* argv[]){

   // TODO:
   // getopt server address to run and provide it to start class
   // also read files list from args or use some dir, maybe *.cpp file selection and push it to Client 

  // USAGE: 
  // i think good interface would be like this ./client 192.168.0.1:7666 jola.cpp misio.cpp jack.cpp
  //  ./client <server-addr> <files to compile...>

  Client::getInstance()->run("192.168.1.1:6000");
  
  return 0;
  
}