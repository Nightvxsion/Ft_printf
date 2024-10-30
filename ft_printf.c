/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.org    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:21:03 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/29 08:05:11 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_formats(va_list elem, const char format)
{
	int	format_espec;

	format_espec = 0;
	if (format == 'c')
		format_espec += ft_printchar(va_arg(elem, int));
	else if (format == 's')
		format_espec += ft_printstr(va_arg(elem, char *));
	else if (format == 'p')
		format_espec += ft_printptr(va_arg(elem, unsigned long long));
	else if (format == 'd' || format == 'i')
		format_espec += ft_printnbr(va_arg(elem, int));
	else if (format == 'u')
		format_espec += ft_printunsign(va_arg(elem, unsigned int));
	else if (format == 'x' || format == 'X')
		format_espec += ft_totalhex(va_arg(elem, unsigned int), format);
	else if (format == '%')
		format_espec += ft_printprcnt();
	return (format_espec);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		leng;
	va_list	elem;

	i = 0;
	leng = 0;
	va_start(elem, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			leng += ft_formats(elem, str[i + 1]);
			i++;
		}
		else
			leng += ft_printchar(str[i]);
		i++;
	}
	va_end(elem);
	return (leng);
}

/*int	main(void)
{
	char			*prueba = "ME CAGO EN DIOS";
	char			s = 'a';
	int				i = 123916239;
	unsigned int	a = 0;
	ft_printf("Numero -> %i", i);
	printf("\n");
	return (0);
}*/
