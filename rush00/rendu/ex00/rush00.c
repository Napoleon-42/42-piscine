/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lnelson_rush00.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:25:07 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/01 16:08:30 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_disp_line(char a, char b, char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (i == 0)
			ft_putchar(a);
		else if (i == (size - 1))
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	if ((x > 0) && (y > 0) &&
		(x <= 2147483647) && (y <= 2147483647))
	{
		while (i < y)
		{
			if (i == 0 || i == (y - 1))
				ft_disp_line('o', '-', 'o', x);
			else
				ft_disp_line('|', ' ', '|', x);
			i++;
		}
	}
	else
		ft_putchar('\n');
}
