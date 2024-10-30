/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:26:37 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/29 08:03:11 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_unsign_len(unsigned int n)
{
	int	leng;

	leng = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		leng++;
		n /= 10;
	}
	return (leng);
}

char	*ft_unsignitoa(unsigned int n)
{
	char	*str;
	int		leng;

	if (n == 0)
		return ((char *)write(1, "0", 1));
	leng = ft_unsign_len(n);
	str = (char *)malloc(sizeof(char) * (leng + 1));
	while (n != 0)
	{
		str[leng - 1] = (n % 10) + '0';
		n /= 10;
		leng--;
	}
	return (str);
}

int	ft_printunsign(unsigned int n)
{
	char	*str;
	int		leng;

	str = ft_unsignitoa(n);
	if (!str)
		return (0);
	leng = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else
	{
		str = ft_unsignitoa(n);
		leng = ft_printstr(str);
		free(str);
	}
	return (leng);
}

/*int	main(void)
{
	unsigned int	n;
	int				a;

	n = 0;
	a = ft_printunsign(n);
	printf("Resultado de unsigned -> %u\n", n);
	return (0);
}*/