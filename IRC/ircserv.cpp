/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaghoug <nbaghoug@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:47:37 by nbaghoug          #+#    #+#             */
/*   Updated: 2024/05/15 16:57:52 by nbaghoug         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.hpp"

int main(int argc ,char **argv)
{
    if(argc == 3)
    {
        signal(SIGPIPE, SIG_IGN);
        signal(SIGINT , server::sig_handler);
        signal(SIGQUIT , server::sig_handler);
        std::string first_arg(argv[1]);
        std::string second_arg(argv[2]);
        server ser(first_arg,second_arg);
        ser.create_server();
    }
    else
        std::cerr << "Error: usage --> ./ircserv <port> <password>" 
                    <<std::endl;
}