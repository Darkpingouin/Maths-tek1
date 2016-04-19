int     my_putstr(char *str)
{
  int   i;

  i = 0;
  while (str[i] != 0)
    {
      write(1, &str[i], 1);
      i = i + 1;
    }
}

int     ss_my_put_nbr(int n)
{
  if (n == -2147483648)
    my_putstr("-2147483648");
}

int     my_put_nbr(int n)
{
  int   div;

  ss_my_put_nbr(n);
  if (n < 0 && n != -2147483648)
    {
      n = n * -1;
      my_putchar('-');
    }
  if (n == 0)
    my_putchar('0');
  if (n != 0 && n != -2147483648)
    {
      div = 1;
      while (n / div > 10)
        div = div * 10;
      my_putchar(n / div + 48);
      while (div != 1)
        {
          n = n - n / div * div;
          div = div / 10;
          my_putchar(n / div + 48);
        }
    }
}

