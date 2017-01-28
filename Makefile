##
## Makefile for Makefile in /home/edwin/Epitech/M1
## 
## Made by edwin
## Login   <edwin.rocha-carvalho@epitech.eu>
## 
## Started on  Thu Jan 26 09:18:52 2017 edwin
## Last update Fri Jan 27 23:30:48 2017 edwin
##
RM	=	rm -f

CC	=	gcc

##CFLAGS	+=	-Wall -Wextra -Werror
CFLAGS	+=	-I. -L./lib -lmy -lgnl

NAME	=	mysh

SRCS	=	./srcs/my_getenv.c	\
		./srcs/exec.c		\
		./srcs/cat_path.c	\
		./srcs/main.c

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
