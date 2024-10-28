/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:04:19 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/28 23:04:19 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_ptrlen(uintptr_t nbr)
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

void	ft_ptrcalc(uintptr_t nbr)
{
	if (nbr >= 16)
	{
		ft_ptrcalc(nbr / 16);
		ft_ptrcalc(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1); // If it's less than 9, then we grab the number and add 47
			// (value of 0 in ASCII) and add with the number of the parameter
		else
			ft_putchar_fd((nbr - 10 + 'a'), 1); // The same as before but with the letters of the hex code
	}
}

int	ft_printptr(unsigned long long nbr)
{
	int	ptr_output;

	ptr_output = 0;
	ptr_output += write(1, "0x", 2);
	if (nbr == 0)
		write(1, "0", 1);
	else
	{
		ft_ptrcalc(nbr);
		ptr_output += ft_ptrlen(nbr);
	}
	return (ptr_output);
}