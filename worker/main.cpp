#include "Worker.h"


int main(int argc, char* argv[]){

   // getopt server address to run and provide it to start class

  Worker::getInstance()->run("127.0.0.1:6667");
  
  return 0;
  
}


