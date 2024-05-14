/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 22:02:29 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/09 17:43:18 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	capone;

	x = 0;
	capone = 1;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z')
			|| (str[x] >= 'A' && str[x] <= 'Z'))
		{
			if (str[x] >= 'A' && str[x] <= 'Z')
				str[x] += 32;
			if (capone)
			{
				if (!(str[x - 1] >= '0' && str[x - 1] <= '9'))
					str[x] -= 32;
				capone = 0;
			}
		}
		else
			capone = 1;
		x++;
	}
	return (str);
}
