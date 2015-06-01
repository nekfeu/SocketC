/*
** main.c for  in /home/empoci_k/LibSocket/Server
** 
** Made by Kévin Empociello
** Login   <empoci_k@epitech.net>
** 
** Started on  Wed May 27 14:47:38 2015 Kévin Empociello
** Last update Mon Jun  1 13:49:43 2015 Kévin Empociello
*/

void	main(int ac, char **av)
{
  int	sock;
  char	*str;

  sock = init_client("127.0.0.1", 9293);
  /* str = recept_str(sock); */
  /* printf("Récup : %s\n", str); */
  send_str("Bonjour\n", sock);
  close(sock);
}
