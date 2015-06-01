/*
** send.c for  in /home/empoci_k/LibSocket/SocketIO/Server
** 
** Made by Kévin Empociello
** Login   <empoci_k@epitech.net>
** 
** Started on  Wed May 27 16:04:43 2015 Kévin Empociello
** Last update Wed May 27 17:31:00 2015 Kévin Empociello
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void			send_str(char *str, int sock)
{
  if ((send(sock, str, strlen(str), 0))< 0)
    error("Error in sending string");
}
