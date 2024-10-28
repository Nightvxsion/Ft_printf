/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcgar2 <marcgar2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:20:55 by marcgar2          #+#    #+#             */
/*   Updated: 2024/10/25 22:20:55 by marcgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	ft_printchar(char c);
int		ft_hexalen(unsigned int nbr);
int		ft_totalhex(unsigned int num, const char format);
void	ft_calchex(unsigned int num, const char format);
int		ft_totalhex(unsigned int num, const char format);
int		ft_unsign_len(unsigned int n);
char	*ft_unsignitoa(unsigned int n);
int		ft_printunsign(unsigned int n);
int		ft_printprcnt(void);

void	ft_putstr(char *str);
int		ft_printstr(char *str);
int		ft_printnbr(int a);

#endif
