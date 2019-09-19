/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:18:48 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/06 12:18:49 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char const *argv[])
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
