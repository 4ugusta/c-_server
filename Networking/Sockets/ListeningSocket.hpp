//
//  ListeningSocket.hpp
//  hdelibc
//
//  Created by Augusta Bhardwaj on 15/08/24.
//

#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>

#include "BindingSocket.hpp"

namespace HDE
{

class ListeningSocket : public BindingSocket
{
private:
    int backlog;
    int listening;
public:
    // Constructor
    ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
    // Mutator
    void start_listening();
    // Getters
    int get_listening();
    int get_backlog();
};

}

#endif /* ListeningSocket_hpp */
