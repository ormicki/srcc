/*
* Document-class:  Server
*
* Server class (singleton) constains server engine
* file: Server.h
* author: JO
*/


#ifndef __SRCC_SERVER_CLASS__
#define __SRCC_SERVER_CLASS__

#include "../lib/Errors.h"


class Server{

  // atributes
  int port;
  
  // singleton method
  public:
    static Server* getInstance() { static Server theInstance; return &theInstance; }
    void run(int port_number);
    
  // private consructor
  private:
    Server();
  
};


#endif


