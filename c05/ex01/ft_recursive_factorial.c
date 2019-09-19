/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:13:46 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/09 09:24:19 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (0);
}
