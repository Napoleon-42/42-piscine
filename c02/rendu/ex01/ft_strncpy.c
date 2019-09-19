/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 16:19:10 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/01 16:19:12 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int c;

	c = 0;
	while (*(str + c) != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int size;

	i = 0;
	size = ft_strlen(src);
	while (i < n)
	{
		if (i <= size)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
