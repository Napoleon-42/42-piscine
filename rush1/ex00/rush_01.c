/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:17:52 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/08 23:39:36 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int tab[4][4]);
int		ft_verif_hoz_view(int tab[4][4], int x, int view_left, int view_right);
int		ft_verif(int tab[4][4], int x, int y, int k);
char	*ft_str_all(int a);
char	*ft_str_all_p(int a);
char	*ft_str_line(int a);

int		*ft_strcpy(int *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i] - 48;
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}

int		ft_brain(int tab[4][4], int pos, char **av)
{
	int i;
	int j;
	int k;

	k = 0;
	if (pos == 3)
		return (1);
	i = pos;
	j = 3;
	if (tab[i][j] != 0)
		return (ft_brain(tab, pos + 1, av));
	while (k < 24)
	{
		ft_strcpy(tab[i], ft_str_line(k));
		if (ft_verif_hoz_view(tab, i, (av[1][18 + (pos * 2)] - 48),
		(av[1][26 + (pos * 2)])))
			ft_brain(tab, pos + 1, av);
		k++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;
	int j;
	int key;
	int tab[4][4];

	(void)ac;
	key = 0;
	i = -1;
	j = -1;
	while (++i < 4)
		while (++j < 4)
			tab[i][j] = 0;
	tab[1][1] = 0;
	tab[1][0] = 0;
	ft_display(tab);
	ft_brain(tab, 0, av);
	ft_display(tab);
	write(1, "ERROR", 5);
	return (0);
}
