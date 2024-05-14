/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:46:58 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/08 11:35:27 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check(char x)
{
	if (!((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z')))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_alpha(char *str)
{
	int	alph;

	alph = 0;
	while (str[alph] != '\0')
	{
		if (!check(str[alph]))
		{
			return (0);
		}
		alph++;
	}
	return (1);
}
