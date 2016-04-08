#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void     my_putchar(char c);
void     my_putstr(char *str);
void     my_put_nbr(int n);
void     my_pointeur(va_list ap, char c);
void     my_princ(va_list ap);
void     my_prinmod();
void     my_prinu(va_list ap);
void     my_prini(va_list ap);
void     my_prino(va_list ap);
int      my_printf(char *texte, ...);
void	 my_hex(unsigned int nbr, char *base);
void     my_prinx(va_list ap);
void     my_prinX(va_list ap);
void     my_octa(unsigned int nbr, char *base);
