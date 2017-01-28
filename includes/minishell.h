/*
** minishell.h for minishell.h in /home/edwin/Epitech/M1/includes
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Fri Jan 27 15:14:13 2017 edwin
** Last update Fri Jan 27 22:46:04 2017 edwin
*/

#ifndef MINISHELL_H_
# define MINISHELL_H_
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int	add_arg(char **tab, char **argv, char **env);
char	*cat_path(char *s1, char *s2);
char	**my_getenv(char **env);

#endif /* !MINISHELL_H_ */
