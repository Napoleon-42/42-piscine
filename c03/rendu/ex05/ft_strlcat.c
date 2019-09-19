/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:49:47 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/12 14:27:41 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int res_size;
	unsigned int j;

	j = 0;
	i = 0;
	ft_strlen(dest);
	if (ft_strlen(dest) > size)
		res_size = size + ft_strlen(src);
	else if (ft_strlen(dest) <= size)
		res_size = ft_strlen(dest) + ft_strlen(src);
	j = ft_strlen(dest);
	while (src[i] != '\0' && j + 1 < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (res_size);
}
