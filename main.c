/*
** main.c for my_printf in /Users/thierr_l/Documents/my_printf
** 
** Made by THIERRY Loris
** Login   <thierr_l@etna-alternance.net>
** 
** Started on  Mon Apr  4 10:09:36 2016 THIERRY Loris
** Last update Mon Apr  4 16:59:29 2016 THIERRY Loris
*/

#include <stdarg.h>
#include <stdio.h>
#include "outils.h"

int my_printf(char *texte, ...)
{
  int tailleChaine = 0, i;
  double sum = 0;
  va_list ap;
  va_start(ap, texte);
   
  tailleChaine = strlen(texte);
    
  for(i = 0; i < tailleChaine; i++)
    {
      if(texte[i] == '%')
	{
	  if (texte[i+1] == 'd')
	    {
	      sum = va_arg(ap, int);
	      my_put_nbr(sum);
	      i++;
	    }
	  if(texte[i+1] == 's')
	    {
	      sum = va_arg(ap, int);
	      my_put_nbr(sum);
	      i++;
	    }
	}
      else
	my_putchar(texte[i]);
    }
  va_end(ap);
  return (0);
}

int    main ()
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine\n");
  my_printf("3 - %d\n", 42);
  //my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');
}
