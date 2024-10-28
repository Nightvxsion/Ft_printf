/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:36:47 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/24 23:36:47 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_hexalen(unsigned int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		i++;
		nbr /= 16;
	}
	return (i);
}

void	ft_calchex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_calchex(num / 16, format);
		ft_calchex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd(num + '0', 1); // If there's only one digit, passes as ascii value
		else
		{
			if (format == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1); // If it's 'x' then it return a lower-char value
			else if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1); // Sume but it's capital (-10 for the ascii value in hex)
		}
	}
}

int	ft_totalhex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1)); // If NaN
	ft_calchex(num, format); // Passes as parameter the number and the type of data (format)
	return (ft_hexalen(num)); // Total length of the hexadecimal num
}

int main(void)
{
	unsigned int	num1;
	int					total;

	num1 = 4020;
	total = ft_totalhex(num1, 'X');
	printf("\nHexadecimal length: %u\n", total);

	/*printf("\nTotal length -> %d\n", total);*/
	return (0);
}
