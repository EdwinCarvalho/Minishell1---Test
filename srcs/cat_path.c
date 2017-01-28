/*
** cat_path.c for cat_path.c in /home/edwin/Epitech/M1/srcs
** 
** Made by edwin
** Login   <edwin.rocha-carvalho@epitech.eu>
** 
** Started on  Fri Jan 27 22:33:17 2017 edwin
** Last update Fri Jan 27 22:34:32 2017 edwin
*/
#include "../includes/library.h"
#include "../includes/minishell.h"

char	*cat_path(char *s1, char *s2)
{
  char	*new_string;
  int	i;
  int	j;

  i = 0;
  j = 0;
  new_string = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
  if (new_string == NULL)
    return (NULL);
  while (s1[i] != '\0')
    {
      new_string[i] = s1[i];
      i = i + 1;
    }
  new_string[i] = '/';
  i = i + 1;
  while (s2[j] != '\0')
    {
      new_string[i] = s2[j];
      i = i + 1;
      j = j + 1;
    }
  new_string[i] = '\0';
  return (new_string);
}
