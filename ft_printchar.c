#include "ft_printf.h"
char ft_printchar(char c)
{
  write(1, &c, 2);
  return 0;
}
int main(void)
{
  char a = 'ab';
  char total;
  total = ft_printchar(a);
  printf("%s\n", total);
  return 0;
}
