/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 01:48:41 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/13 18:56:21 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *res;
	int i;

	if (min >= max)
		return (0);
	i = 0;
	if ((res = malloc((max - min) * 4)) == 0)
		return (0);
	while (i < max - min)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
