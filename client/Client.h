/*
* Document-class:  Client
*
* Client class (singleton) constains server engine
* file: Client.h
* author: JO
* edited_by: JO
*/

// FIXME: alter interface for file choosing / adding / selecting

#ifndef __SRCC_CLIENT_CLASS__
#define __SRCC_CLIENT_CLASS__

#include "../lib/Errors.h"


class Client{

  // atributes
  
  // singleton method
  public:
    static Client* getInstance() { static Client theInstance; return &theInstance; }
    void run(char* server_name);
    
  // private consructor
  private:
    Client();
  
};


#endif


