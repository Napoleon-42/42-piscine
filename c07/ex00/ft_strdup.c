/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 01:36:28 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/11 22:01:25 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *out;

	if ((out = malloc((ft_strlen(src) + 1) * (sizeof(char)))) == 0)
		return (0);
	ft_strcpy(out, src);
	return (out);
}
