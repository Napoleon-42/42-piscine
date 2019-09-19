/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:48:16 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/09 11:08:36 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power >= 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	else
		return (0);
}
