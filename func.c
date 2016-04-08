#include <unistd.h>
#include "outils.h"

void my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}

int my_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] != 0 || s2[i] != 0)
    {
      if (s1[i] == s2[i])
	i++;
      else if (s1[i] < s2[i])
	return (-1);
      else
	return (1);
    }
  return (0);
}


void la_boucle(int c)
{
  if (c >= 10 || c < 0)
    {
      my_put_nbr(c / 10);
      my_put_nbr(c % 10);
    }
  else
    {
      my_putchar(c + 48);
    }
}

void my_put_nbr(int n)
{
  int c;

  c = n;
  if (c < 10 && c >= 0)
    {
      my_putchar(c + 48);
    }
  else if (c > 9)
    {
      la_boucle(c);
    }
  else if (n == -2147483647)
    {
      my_putstr("-2147483647");
    }
  else
    {
      my_putchar('-');
      c = -1 * c;
      la_boucle(c);
    }
}
