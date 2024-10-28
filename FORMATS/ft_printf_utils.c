/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:00:55 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/28 22:00:55 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("null");
		return (5);
	}
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(i);
}

int	ft_printnbr(int a)
{
	char	*str;
	int		leng;

	str = NULL;
	leng = 0;
	leng = ft_printstr(str);
	str = ft_itoa(a);
	free(str);
	return (leng);
}
