CC              =               gcc
NAME            =               my_ls
SRC             =               main.c          \
                                function.c      \
				ls.c		\
				my_lsl.c	\
                                verif.c

CFLAGS          =               -W -Wall -Werror
RM              =               rm -f
OBJ             =               $(SRC:%.c=%.o)

$(NAME):			$(OBJ)
				$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

all:                            $(NAME)

clean:
				$(RM) $(OBJ)

fclean:                         clean
				$(RM) $(NAME)

re:                             fclean all