CC              =               gcc

SRC           	=               func.c      	\
				my_printf.c	\
				print_func.c	

CFLAGS          =               -fPIC -W -Wall -Werror -Wextra

CFLAG		=		-shared

RM              =               rm -f

OBJ             =               $(SRC:%.c=%.o)

STATIC		=		libmy_printf_`uname -m`-`uname -s`.a

DYNAMIC		=		libmy_printf_`uname -m`-`uname -s`.so

make :				all

my_printf_static :		$(OBJ)
				ar r $(STATIC) $(OBJ)

my_printf_dynamic :		$(OBJ)
				$(CC) $(CFLAGS) $(CFLAG) -o $(DYNAMIC) $(SRC)

all:                            my_printf_static my_printf_dynamic

clean:
				$(RM) $(OBJ)

fclean:                         clean
				$(RM) $(STATIC) $(DYNAMIC)

re:                             fclean all

.PHONY :			make my_printf_static my_printf_dynamic all clean fclean re
