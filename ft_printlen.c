#include "ft_printf.h"
#include <string.h>
#include <stdlib.h>

int ft_printlen(int i)
{
    char *str;
    int z;
    
    str = NULL;
    z = 0;
    while (str[z])
        z++;
    return (z);
}

int main(void)
{
    char *str = malloc(20);
    int total;
    strcpy(str, "me cago en dios");
    total = ft_printlen((char *)str);
    printf("Length -> %d\n", total);
    free(str);
    return 0;
}