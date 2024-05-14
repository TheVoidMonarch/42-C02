/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:24:33 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/09 11:25:37 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char x)
{
	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	upp;

	upp = 0;
	while (str[upp] != '\0')
	{
		if (!check(str[upp]))
		{
			return (0);
		}
		upp++;
	}
	return (1);
}
