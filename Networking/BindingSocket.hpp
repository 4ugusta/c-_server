//
//  BindingSocket.hpp
//  hdelibc
//
//  Created by Augusta Bhardwaj on 14/08/24.
//
/*  This class implements a call to the bind() function of
    sockets as a definition of the connect_to_network
    virtual function from SimpleSocket. 
 */
//

#ifndef BindingSocket_hpp
#define BindingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{

class BindingSocket: public SimpleSocket
{
public:
    // Constructor
    BindingSocket(int domain, int service, int protocol, int port, u_long interface);
    // Virtual function from parent
    int connect_to_network(int sock, struct sockaddr_in address);
};

}

#endif /* BindingSocket_hpp */
