//
//  ListeningSocket.cpp
//  hdelibc
//
//  Created by Augusta Bhardwaj on 15/08/24.
//

#include "ListeningSocket.hpp"

// Constructor
HDE::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg) : BindingSocket(domain, service, protocol, port, interface)
{
    backlog = bklg;
    start_listening();
    test_connection(listening);
}


// Mutators
void HDE::ListeningSocket::start_listening()
{
    listening = listen(get_sock(), backlog);
}

// Getters
int HDE::ListeningSocket::get_listening()
{
    return listening;
}

int HDE::ListeningSocket::get_backlog()
{
    return backlog;
}
