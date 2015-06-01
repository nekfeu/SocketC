/*
** recev.c for  in /home/empoci_k/LibSocket/SocketIO/Server
** 
** Made by Kévin Empociello
** Login   <empoci_k@epitech.net>
** 
** Started on  Wed May 27 16:04:57 2015 Kévin Empociello
** Last update Wed May 27 17:30:26 2015 Kévin Empociello
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char			*recept_str(int sock)
{
  char			*str;
  int			n;

  n = 0;
  if ((str = malloc(1024 * sizeof(char))) ==  NULL)
    error("Malloc failed");
  if ((n = recv(sock, str, 1024 * sizeof(char), 0)) < 0)
    error("Error in receptionning");
  str[n] = '\0';
  return (str);
}
