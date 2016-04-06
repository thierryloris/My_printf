#include "outils.h"

void my_prind(va_list ap)
{
  my_put_nbr(va_arg(ap, int));
}

void my_prins(va_list ap)
{
  my_putstr(va_arg(ap, char*));
}

void my_pointeur(va_list ap, char c)
{
  void (*tab[7]) (va_list);
  int i;
  char* str;

  i = 0;
  str = "%cuiods";
  tab[0] = &my_prinmod;
  tab[1] = &my_princ;
  tab[2] = &my_prinu;
  tab[3] = &my_prini;
  tab[4] = &my_prino;
  tab[5] = &my_prind;
  tab[6] = &my_prins;
  while ( str[i] != '\0' )
    {
      if (c == str[i])
        (*tab[i])(ap);
      i++;
    }
}
