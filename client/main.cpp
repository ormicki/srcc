#include "Client.h"


int main(int argc, char* argv[]){

  Client::getInstance()->run("192.168.1.1:6000");
  
  return 0;
  
}