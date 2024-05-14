/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:12:54 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/09 11:21:23 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char x)
{
	if (!(x >= '0' && x <= '9'))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (!check(str[num]))
		{
			return (0);
		}
		num++;
	}
	return (1);
}
