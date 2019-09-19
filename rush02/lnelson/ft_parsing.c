/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:03:14 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/15 19:00:46 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

char	*ft_dic_to_str(char *dict_name)
{
	int		fd;
	int		size;
	char	temp[2000];
	char	*str;

	fd = open(dict_name, O_RDONLY);
	size = read(fd, temp, 2000);
	close(fd);
	fd = open(dict_name, O_RDONLY);
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (0);
	read(fd, str, size);
	close(fd);
	str[size] = '\0';
	return (str);
}

int		ft_endspace(char *str, int count)
{
	int i;

	i = count;
	while (str[i] != '\n')
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int		ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
		j++;
	if (j == 0)
		return (-1);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] || to_find[j] == 0)
			{
				if (to_find[j] == 0)
					return (i);
				j++;
			}
		}
		i++;
	}
	return (-1);
}

void	ft_display(char *dict, int start, int end, int size)
{
	int i;

	while (++start != end + 1)
	{
		write(1, &dict[start], 1);
		i++;
	}
	if (i != size - 1)
		write(1, " ", 1);
}

int		ft_parsing(char **strs, char *dict, int size)
{
	int i;
	int j;
	int pos;
	int start;

	i = 0;
	j = 0;
	while (i < size)
	{
		pos = ft_strstr(dict, strs[i]);
		while (dict[pos] != ':' || dict[pos] != ' ')
			pos++;
		start = pos;
		while (ft_endspace(dict, pos + 1) != 1)
		{
			pos++;
			j++;
		}
		ft_display(dict, start, pos, size);
		if (i == size - 1)
			write(1, "\n", 1);
		i++;
	}
}
/*
** pour tester changer les argument de l'avant derniere ligne en fonction du
** nombre d'arguments et leur type
** + i a la ligne 100 (pour eviter le zero au debut)
**int main(int argc, char **argv)
**{
**	char *test;
**	char **tab;
**	int i = 0;
**	char *dictname = "numbers.dict";
**	test = ft_dic_to_str(dictname);
**	tab = malloc(sizeof(char *) * 5);
**	while(tab[i])
**	{
**		tab[i] = malloc(sizeof(char) * 100);
**		i++;
**	}
**	tab[0] = "2";
**	tab[1] = "1000";
**	tab[2] = "40";
**	tab[3] = "8";
**	printf("%s\n", test);
**	ft_parsing(argv, test, 6);
**	return 0;
**}
*/
