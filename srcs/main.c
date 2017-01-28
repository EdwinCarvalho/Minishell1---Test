/*
** main.c for main.c in /home/edwin/Epitech/M1/srcs
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Fri Jan 27 16:05:35 2017 edwin
** Last update Fri Jan 27 23:31:59 2017 edwin
*/
#include "../includes/library.h"
#include "../includes/minishell.h"
#include "../includes/gnl.h"

int	main(int argc, char **argv, char **env)
{
  char	*str;
  char	**arg;
  char	**tab;

  if (argc == 1)
    {
      while (42)
	{
	  my_putstr("edwin@840-G3$>");
	  str = get_next_line(0);
	  arg = my_str_to_wordtab(str, ' ');
	  tab = my_getenv(env);
	  add_arg(tab, arg, env);
	}
    }
  else
    return (84);
  free(str);
  free(tab);
  return (0);
}
