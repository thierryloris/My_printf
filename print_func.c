#include "outils.h"

void my_princ(va_list ap)
{
  my_putchar(va_arg(ap, int));
}

void my_prinmod()
{
  my_putchar('%');
}

void my_prinu(va_list ap)
{
  my_put_nbr(va_arg(ap, unsigned int));
}

void my_prini(va_list ap)
{
  my_putchar(va_arg(ap, int));
}

void my_prino(va_list ap)
{
  char *base;
  base = "01234567";
  my_octa(va_arg(ap, unsigned int), base);
}
