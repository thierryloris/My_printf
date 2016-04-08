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
  void (*tab[9]) (va_list);
  int i;
  char* str;

  i = 0;
  str = "%cuiodsxX";
  tab[0] = &my_prinmod;
  tab[1] = &my_princ;
  tab[2] = &my_prinu;
  tab[3] = &my_prini;
  tab[4] = &my_prino;
  tab[5] = &my_prind;
  tab[6] = &my_prins;
  tab[7] = &my_prinx;
  tab[8] = &my_prinX;
  while ( str[i] != '\0' )
    {
      if (c == str[i])
        (*tab[i])(ap);
      i++;
    }
}


int my_printf(char *texte, ...)
{
  int tailleChaine = 0, i;

  va_list ap;
  va_start(ap, texte);
  tailleChaine = strlen(texte);

  for(i = 0; i < tailleChaine; i++)
    {
      if(texte[i] == '%')
	{
	  my_pointeur(ap, texte[i+1]);
	  i++;
	}
      else
	my_putchar(texte[i]);
    }
  va_end(ap);
  return (0);
}
