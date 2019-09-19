/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:00:58 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/08 02:18:59 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				ft_verif_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_l;
	unsigned int	nb;

	base_l = 0;
	if (ft_verif_base(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nb = nbr * -1;
		}
		else
			nb = nbr;
		if (nb >= ft_strlen(base))
			ft_putnbr_base((nb / ft_strlen(base)), base);
		ft_putchar(base[nb % ft_strlen(base)]);
	}
}
