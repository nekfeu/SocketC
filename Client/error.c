/*
** error.c for  in /home/empoci_k/LibSocket/SocketIO/Server
** 
** Made by Kévin Empociello
** Login   <empoci_k@epitech.net>
** 
** Started on  Wed May 27 14:58:17 2015 Kévin Empociello
** Last update Wed May 27 15:34:57 2015 Kévin Empociello
*/

#include <stdlib.h>
#include <stdio.h>

void	error(char *str)
{
  printf("%s\n", str);
  exit(-1);
}
