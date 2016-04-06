
/*
** main.c for my_printf in /Users/thierr_l/Documents/my_printf
** 
** Made by THIERRY Loris
** Login   <thierr_l@etna-alternance.net>
** 
** Started on  Mon Apr  4 10:09:36 2016 THIERRY Loris
** Last update Tue Apr  5 10:00:34 2016 THIERRY Loris
*/

#include "outils.h"

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

int    main ()
{
  my_printf("1 - une chaine\n");
  my_printf("2 - %s\n", "une autre chaine");
  my_printf("3 - %d\n", 42);
  my_printf("4 - %s %d %s%c", "avec", 4, "parametres", '\n');  
  my_printf("1 - %o\n", 42); /* unsigned octal */
  my_printf("2 - %u\n", (unsigned int)4200000000); /* unsigned decimal */
  my_printf("3 - %x\n", 42); /* unsigned hexadecimal */
  my_printf("4 - %X\n", 42); /* unsigned hexadecimal */
  my_printf("5 - %d%%\n", 42);  
return(0);
}
