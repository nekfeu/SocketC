/*
** client.c for  in /home/empoci_k/LibSocket/SocketIO/Client
** 
** Made by Kévin Empociello
** Login   <empoci_k@epitech.net>
** 
** Started on  Wed May 27 17:18:08 2015 Kévin Empociello
** Last update Wed May 27 17:34:26 2015 Kévin Empociello
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

int			init_client(char *hostname, int port)
{
  struct sockaddr_in	sin;
  struct hostent	*hostinfo;
  int			sock;
  int			sinsize;

  memset(&sin, 0, sizeof(sin));
  hostinfo = NULL;
  if ((sock = socket(AF_INET, SOCK_STREAM, 0)) == -1)
    error("Error in creating socket");
  if ((hostinfo = gethostbyname(hostname)) == NULL)
    error("Unknown host");
  sin.sin_addr = * (struct in_addr *) hostinfo->h_addr;
  sin.sin_port = htons(port);
  sin.sin_family = AF_INET;
  if ((connect(sock, (struct sockaddr *) &sin, sizeof(struct sockaddr))) == -1)
    error("Error in connecting socket");
  return (sock);
}
