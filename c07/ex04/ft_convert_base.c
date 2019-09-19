/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:14:54 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/19 14:30:10 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_start(char *str, int *j);
int		ft_strchar(char *str, char c);
int		ft_strlen(char *str);

int		ft_verif_base(char *base)
{
	unsigned int	i;
	int				j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || base[i] == '\n' || base[i] == '\r' ||
		base[i] == '\t' || base[i] == '\v' || base[i] == '\f' ||
		base[i] == '-' || base[i] == '+')
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

int		ft_nbrl(int nbr, char *base)
{
	int count;
	int nb;

	nb = nbr;
	count = 1;
	while (nb / ft_strlen(base) != 0)
	{
		count++;
		nb /= ft_strlen(base);
	}
	if (nbr < 0)
		count++;
	return (count);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		i;
	int		count;
	char	*res;

	count = ft_nbrl(nbr, base);
	if (!(res = malloc(sizeof(char) * (count + 1))))
		return (0);
	i = count;
	if (nbr < 0)
		res[0] = '-';
	if (nbr > 0)
		while (i-- > 0)
		{
			res[i] = base[nbr % ft_strlen(base)];
			nbr /= ft_strlen(base);
		}
	else
		while (i-- > 1)
		{
			res[i] = base[-nbr % ft_strlen(base)];
			nbr /= ft_strlen(base);
		}
	res[count] = 0;
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;

	if (ft_verif_base(base_from) == 0 || ft_verif_base(base_to) == 0)
		return (res = 0);
	res = ft_itoa_base(ft_atoi_base(nbr, base_from), base_to);
	return (res);
}
/*
**int main(int argc, char **av)
**{
**	(void)argc;
**	printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
**	return 0;
**}
*/
