##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## for nfs
##

NAMEF	=	src/*.c \
		src/printf/*.c

NAME	=	ai

OPT		=	-g3 -o

CFLAGS	=	-Werror -Wextra -W

$(NAME):	fclean
	gcc $(OPT) $(NAME) $(NAMEF) $(CFLAGS)

all:	$(NAME)

clean:
	rm -f $(NAME)~

fclean: clean
	rm -f $(NAME)
	rm -f n4s_package/$(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
