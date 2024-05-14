/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:19:42 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/10 00:58:42 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *vtr)
{
	unsigned int	x;

	x = 0;
	while (vtr[x] != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	og;

	og = 0;
	if (size != 0)
	{
		while ((src[og] != '\0') && (og < size - 1))
		{
			dest[og] = src[og];
			og++;
		}
		dest[og] = '\0';
	}
	return (length(src));
}
