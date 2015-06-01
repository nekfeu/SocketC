/*
** send.c for  in /home/empoci_k/LibSocket/SocketIO/Server
** 
** Made by Kévin Empociello
** Login   <empoci_k@epitech.net>
** 
** Started on  Wed May 27 16:04:43 2015 Kévin Empociello
** Last update Mon Jun  1 13:47:05 2015 Kévin Empociello
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

void			send_str(char *str, int sock)
{
  if ((send(sock, str, strlen(str), 0))< 0)
    error("Error in sending string");
}
