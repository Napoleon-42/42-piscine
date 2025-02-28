/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:14:33 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/19 15:21:16 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 0;
	if (nb == 2)
		return (1);
	if (nb < 0 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i < nb && i < 46340)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (ft_is_prime(nb) != 1)
		nb = nb + 2;
	return (nb);
}
