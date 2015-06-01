/*
** server.c for  in /home/empoci_k/LibSocket/SocketIO/Server
** 
** Made by Kévin Empociello
** Login   <empoci_k@epitech.net>
** 
** Started on  Wed May 27 14:56:08 2015 Kévin Empociello
** Last update Mon Jun  1 13:47:03 2015 Kévin Empociello
*/

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <netdb.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int			init_server(int nb_connexion, int port)
{
  struct sockaddr_in	sin;
  struct sockaddr_in	sin_serv;
  int			sock;
  int			sock_serv;
  int			sinsize;

  memset(&sin, 0, sizeof(sin));
  memset(&sin_serv, 0, sizeof(sin_serv));
  if ((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    error("Error in creating socket");
  sin.sin_addr.s_addr = htonl(INADDR_ANY);
  sin.sin_family = AF_INET;
  sin.sin_port = htons(port);
  if ((bind(sock, (struct sockaddr *) &sin, sizeof(sin))) == -1)
    error("Error in binding socket");
  printf("Waiting for a client\n");
  if ((listen(sock, nb_connexion)) == -1)
    error("Error initialisation of listening");
  if ((sock_serv = accept(sock, (struct sockaddr *)&sin_serv, &sinsize)) == -1)
    error("Error socket can't accept connexion");
  return (sock_serv);
}
