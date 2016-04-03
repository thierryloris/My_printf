CC              =               gcc
NAME            =               my_printf
SRC             =               main.c          \
                                func.c      

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