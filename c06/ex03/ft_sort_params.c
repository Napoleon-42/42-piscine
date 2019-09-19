/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:19:01 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/17 17:40:44 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		write(1, &*(str + i), 1);
		i++;
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_str_tab(char **str_tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 1;
	while (i < size)
	{
		j = 2;
		while (str_tab[j] != 0)
		{
			if (ft_strcmp(str_tab[j], str_tab[j - 1]) < 0)
			{
				temp = str_tab[j - 1];
				str_tab[j - 1] = str_tab[j];
				str_tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_str_tab(argv, argc);
	while (argv[i] != 0)
	{
		ft_putstr(argv[i]);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
