#include <stdarg.h>
#include <stdio.h>
#include "outils.h"

void    my_printf (const char *texte, ...)
{
  int tailleChaine = 0, i;
  va_list ap;
  va_start(ap, texte);
   
  tailleChaine = strlen(texte);
    
  for(i = 0; i < tailleChaine; i++)
    {
      if(texte[i] == '%')
	{
	  i++;
	  i++;
	  my_putchar(texte[i]);
	}
    }
  va_end(ap);
}

int    main ()
{
  int nombre1 = 1;
  int nombre2 = 4;
  my_printf("Le nombre 1 est egal a %lq et le nombre 2 a %ld", nombre1, nombre2);
}
