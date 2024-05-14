/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 07:36:16 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/09 18:34:28 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char x)
{
	return (x >= 32 && x <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	char	v;
	char	hex[3];

	while (*str)
	{
		v = *str;
		if (check(v))
		{
			write(1, &v, 1);
		}
		else
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(unsigned char)v >> 4];
			hex[2] = "0123456789abcdef"[(unsigned char)v & 0x0F];
			write(1, hex, 3);
		}
		str++;
	}
}
