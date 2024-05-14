/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:08:09 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/10 00:59:07 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char x)
{
	if (x >= 33 && x <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	isprint;

	isprint = 1;
	while (str[isprint] != '\0')
	{
		if (!check(str[isprint]))
			return (0);
		isprint++;
	}
	return (1);
}
