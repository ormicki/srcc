/*
* Document-class:  Worker
*
* Implementation of Worker class interface (methods)
* file: Worker.cpp
* author: JO
*/

#include "Worker.h"

Worker::Worker(){
  
  //assign basic things
  
  FEAR("Panie tu sie dopiero buduje\n");
}

void Worker::run(char* server_addres){

  printf("Oh Hai %s, i will work for you\n", server_addres );
  
  //  comunicate && compute (g++ -c -o output.o input.cpp )
  
  PANIC(-1, "Meh gone die! sry ! wipe\n");
}