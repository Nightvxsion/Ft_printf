/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:26:37 by marcgar2          #+#    #+#             */
/*   Updated: 2024/11/07 09:14:26 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_unsignitoa(unsigned int n)
{
	char	str[12];
	int		leng;
	int		i;

	i = 0;
	leng = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (n > 0)
	{
		str[leng - 1] = (n % 10) + '0';
		n /= 10;
	}
	while (leng--)
		leng += write(1, &num[i], 1);
	return (str);
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