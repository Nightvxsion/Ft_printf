/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:26:37 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/25 22:26:37 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_unsign_len(unsigned int n)
{
	int	leng;

	leng = 0;
	if (n == 0)
		return (1); // If the number is 0 then print the only char that it has
	while(n != 0)
	{
		leng++;
		n /= 10; // Divide by 10 to get the number on the left side
	}
	return (leng);
}

char	*ft_unsignitoa(unsigned int n)
{
	char	*str;
	int		leng;

	if (n == 0)
		return((char *)write(1, "0", 1)); // Only shows a "0 \0" on the terminal
	leng = ft_unsign_len(n);
	str = (char *)malloc(sizeof(char) * (leng + 1));
	while (n != 0)
	{
		str[leng - 1] = (n % 10) + '0'; // Locates in the previous position,
		//then gets the number of the right side, the turns into ASCII
		n /= 10; // Removes the previous char
		leng--; // Goes inverse
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
		return(write(1, "0", 1));
	else
	{
		str = ft_unsignitoa(n); // this variable contains the ASCII value for that int
		leng = ft_printstr(str); // this variable contains the length of leng, printed as a atring
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