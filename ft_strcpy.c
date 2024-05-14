/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 03:05:55 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/07 06:48:39 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*og_dest;

	og_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (og_dest);
}

/*int main()
{
    char src[] = "Tears of the Kingdom";
	char dest[20];
    char *result = ft_strcpy(dest, src);

	write(1, dest, strlen(dest));
	write(1, "\n", 1);
    return 0;
}*/
