/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:33:47 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/08 23:27:45 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verif(int tab[4][4], int x, int y, int k)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (k == tab[x][i] && i != y)
			return (0);
		if (k == tab[i][y] && i != x)
			return (0);
		i++;
	}
	return (1);
}

int	ft_verif_view_left(int tab[4][4], int x)
{
	int i;
	int res;
	int ress;
	int	max;

	max = 0;
	res = 0;
	ress = 0;
	i = -1;
	while (++i < 4)
		if (tab[x][i] > max)
		{
			max = tab[x][i];
			res++;
		}
	return (res);
}

int	ft_verif_view_right(int tab[4][4], int x)
{
	int i;
	int res;
	int ress;
	int	max;

	max = 0;
	res = 0;
	ress = 0;
	i = -1;
	while (++i < 4)
		if (tab[x][3 - i] > max)
		{
			max = tab[x][3 - i];
			res++;
		}
	return (res);
}

int	ft_verif_hoz_view(int tab[4][4], int x, int view_left, int view_right)
{
	if (view_left == ft_verif_view_left(tab, x)
	&& view_right == ft_verif_view_right(tab, x))
		return (1);
	return (0);
}
