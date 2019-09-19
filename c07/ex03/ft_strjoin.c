/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 02:32:37 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/19 17:09:21 by lnelson          ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}

int		ft_fsize(char **strs, char *sep, int size)
{
	int i;
	int j;
	int res;

	i = 0;
	res = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			j++;
			res++;
		}
		i++;
	}
	res = res + (ft_strlen(sep) * (size - 1));
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	if (size <= 0 || !sep)
	{
		if (!(res = malloc(sizeof(char) * 1)))
			return (0);
		return (res);
	}
	i = 0;
	if ((res = malloc((sizeof(char)) * ft_fsize(strs, sep, size) + 1)) == NULL)
		return (0);
	i = 0;
	res[0] = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res[ft_fsize(strs, sep, size)] = '\0';
	return (res);
}
/*
**int main(int ac, char **av)
**{
**	char sep[] = ", ";
**	char *a;
**	char **tab;
**	int i = 0;
**
**	tab = malloc(sizeof(char *) * 5);
**	while(tab[i])
**	{
**		tab[i] = malloc(sizeof(char) * 100);
**		i++;
**	}
**	tab[0] = "salut toi";
**	tab[1] = "tu est un piscineux?";
**	tab[2] = "moi oui";
**	tab[3] = "je mange du c pendant 26 jours";
**	printf("%d\n", ft_fsize(av, sep, ac));
**	a = ft_strjoin(ac, av, sep);
**	printf("%s\n", a);
**	printf("%d\n", ft_strlen(a));
**	return 0;
**}
*/
