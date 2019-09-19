/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 15:19:18 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/08 03:54:42 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	if (size % 2 == 0)
	{
		while (i < size / 2)
		{
			temp = *(tab + size - i - 1);
			*(tab + size - i - 1) = *(tab + i);
			*(tab + i) = temp;
			i++;
		}
	}
	else
	{
		while (i < ((size - 1) / 2))
		{
			temp = *(tab + size - i - 1);
			*(tab + size - i - 1) = *(tab + i);
			*(tab + i) = temp;
			i++;
		}
	}
}
