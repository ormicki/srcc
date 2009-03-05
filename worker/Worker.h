/*
* Document-class:  Worker
*
* Worker class (singleton) constains server engine
* file: Worker.h
* author: JO
*/


#ifndef __SRCC_WORKER_CLASS__
#define __SRCC_WORKER_CLASS__

#include "../lib/Errors.h"


class Worker{

  // atributes
  
  // singleton method
  public:
    static Worker* getInstance() { static Worker theInstance; return &theInstance; }
    void run(char* server_name);
    
  // private consructor
  private:
    Worker();
  
};


#endif


