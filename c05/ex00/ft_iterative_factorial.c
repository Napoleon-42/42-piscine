/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:10:09 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/09 09:27:02 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
