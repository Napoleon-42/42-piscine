/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 01:59:41 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/19 14:43:37 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int temp;

	temp = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	if (!(*range = malloc((max - min) * sizeof(int))))
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = temp + i;
		i++;
	}
	return (max - min);
}
/*
**int main()
**{
**	int **range;
**	range = malloc(sizeof(int *)* 1);
**	ft_ultimate_range(range , -5, 6);
**	return 0;
**}
*/
