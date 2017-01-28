/*
** exec.c for exec.c in /home/edwin/Epitech/M1/srcs
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Fri Jan 27 22:31:05 2017 edwin
** Last update Fri Jan 27 22:45:46 2017 edwin
*/
#include "../includes/library.h"
#include "../includes/minishell.h"

int	add_arg(char **tab, char **arg, char **env)
{
  pid_t	pid;
  char	*new_path;
  int	status;
  int	a;

  if ((pid = fork()) == -1)
    exit(0);
  else if (pid == 0)
    {
      a = 0;
      while (tab[a][1] != '\n')
	{
	  new_path = cat_path(tab[a], arg[0]);
	  execve(new_path, arg, env);
	  a = a + 1;
	}
    }
  else
    wait(&status);
  return (0);
}
