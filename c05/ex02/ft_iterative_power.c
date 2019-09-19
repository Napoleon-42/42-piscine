/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:25:19 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/10 16:27:58 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power >= 1)
	{
		i = 1;
		res = nb;
		while (i < power)
		{
			res = nb * res;
			i++;
		}
		return (res);
	}
	else
		return (0);
}
