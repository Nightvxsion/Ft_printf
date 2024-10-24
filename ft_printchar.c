#include "ft_printf.h"
char ft_printchar(char c)
{
  write(1, &c, 1);
  return 0;
}
int main(void)
{
  char a = "a";
  char total;
  total = ft_printchar(a);
  printf("Result -> %c\n", total);
  return 0;
}
