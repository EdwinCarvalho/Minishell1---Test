/*
** my_getenv.c for my_getenv.c in /home/edwin/Epitech/M1/srcs
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Fri Jan 27 22:28:18 2017 edwin
** Last update Fri Jan 27 22:30:25 2017 edwin
*/
#include "../includes/library.h"
#include "../includes/minishell.h"

char	**my_getenv(char **env)
{
  char	**find_path;
  int	i;

  i = 0;
  while (env[i] != NULL)
    {
      if (env[i][0] == 'P' && env[i][1] == 'A'
	  && env[i][2] == 'T' && env[i][3] == 'H')
	{
	  if (env[i][4] == '=')
	    env[i] = env[i] + 5;
	  find_path = my_str_to_wordtab(env[i], ':');
	}
      i = i + 1;
    }
  return (find_path);
}
