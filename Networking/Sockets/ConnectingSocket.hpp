//
//  ConnectingSocket.hpp
//  hdelibc
//
//  Created by Augusta Bhardwaj on 15/08/24.
//
/*  This class implements a call to the connect() function of
    sockets as a definition of the connect_to_network
    virtual function from SimpleSocket.
 */
//

#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE
{
class ConnectingSocket: public SimpleSocket
{
private:
    /* MEMBER VARIABLES */
    int connecting;
    
    /* MEMBER FUNCTIONS */
    // Virtual function from parent to establish binding
    void connect_to_network(int sock, struct sockaddr_in address);
public:
    /* CONSTRUCTORS */
    // Parameterized constructor is required for this class
    ConnectingSocket(int domain, int service, int protocol, int port, u_long interface);
    
    /* GETTERS */
    int get_connecting();
};

}

#endif /* ConnectingSocket_hpp */
