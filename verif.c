int appel_func(char *option, str *texte);
{
  int a;
  int (*tab[108]) ();

  
  tab[97] = &my_lsa;
  tab[65] = &my_lsA;
  tab[108] = &my_lsl;
  tab[100] = &my_lsd;
  a = tab[a](argc);
  return (0);
}
