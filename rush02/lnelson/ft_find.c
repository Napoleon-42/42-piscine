/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:17:54 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/15 19:01:19 by lnelson          ###   ########.fr       */
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
	char	*temp;
	char	*str;

	fd = open(dict_name, O_RDONLY);
	if (!(temp = malloc(2000 * sizeof(char))))
		return (0);
	size = read(fd, temp, 2000);
	close(fd);
	free(temp);
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

void	ft_display(char *dict, int start, int end)
{
	int i;

	while (start != end + 1)
	{
		write(1, &dict[start], 1);
		i++;
		start++;
	}
}

void	ft_find_print(char *str, char *dict)
{
	int i;
	int j;
	int pos;
	int start;

	j = 0;
	pos = ft_strstr(dict, str);
	while (dict[pos] != ':')
		pos++;
	pos++;
	while (dict[pos] == ' ')
		pos++;
	start = pos;
	while (ft_endspace(dict, pos + 1) != 1)
	{
		pos++;
		j++;
	}
	ft_display(dict, start, pos);
	i++;
}
/*
**int main()
**{
**	char *test;
**	char *dictname = "numbers.dict";
**	test = ft_dic_to_str(dictname);
**	printf("%s\n", test);
**	ft_find_print("18", test);
**	return 0;
**}
*/
