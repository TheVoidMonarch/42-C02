/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:11:18 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/09 11:23:51 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	low;

	low = 0;
	while (str[low] != '\0')
	{
		if (!check(str[low]))
		{
			return (0);
		}
		low++;
	}
	return (1);
}
