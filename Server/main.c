/*
** main.c for  in /home/empoci_k/LibSocket/Server
** 
** Made by Kévin Empociello
** Login   <empoci_k@epitech.net>
** 
** Started on  Wed May 27 14:47:38 2015 Kévin Empociello
** Last update Wed May 27 16:05:41 2015 Kévin Empociello
*/

void	main(int ac, char **av)
{
  int	sock;
  char	*str;

  sock = init_server(1, 9293);
  str = recept_str(sock);
  printf("A client said : %s\n", str);
  send_str("Bonjour\n", sock);
  close(sock);
}
