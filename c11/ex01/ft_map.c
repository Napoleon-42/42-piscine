/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 11:50:11 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/19 17:58:53 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *res;

	i = 0;
	if (!(res = malloc(sizeof(int) * lenght)))
		return (0);
	while (i < lenght)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
