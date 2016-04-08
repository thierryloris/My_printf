#include "outils.h"

void	my_prinX(va_list ap)
{
  char *base;
  
  base = "0123456789ABCDEF";
  my_hex(va_arg(ap, unsigned int), base);
}

void	my_prinx(va_list ap)
{
  char *base;

  base = "0123456789abcdef";
  my_hex(va_arg(ap, unsigned int), base);
}

void	my_hex(unsigned int nbr, char *base)
{
  int i;

  for (i=0; nbr >= 16;i++)
    nbr = nbr - 16;
  if (i > 0)
    my_hex(i, base);
  my_putchar(base[nbr]);
}

void    my_octa(unsigned int nbr, char *base)
{
  int i;

  for (i=0; nbr >= 8;i++)
    nbr = nbr - 8;
  if (i > 0)
    my_octa(i, base);
  my_putchar(base[nbr]);
}
