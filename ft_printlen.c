/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:16:12 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/24 23:16:12 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <string.h>
#include <stdlib.h>

int ft_printlen(char *str)
{
	int z;

	z = 0;
	if (!str)
		return (0);
	while (str[z])
		z++;
	return (z);
}

/*int main(void)
{
	char *str = malloc(sizeof(char));
	int total;
	strcpy(str, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	total = ft_printlen(str);
	printf("Original chain -> %s\nLength -> %d\n", str, total);
	free(str);
	return 0;
}*/