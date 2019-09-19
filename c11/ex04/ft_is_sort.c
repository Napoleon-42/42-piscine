/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:02:38 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/19 20:09:25 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sort;
	int key;
	int key1;

	sort = 0;
	i = 0;
	key = 0;
	while (f(tab[i], tab[i + 1]) <= 0 && i < length - 1)
		i++;
	if (i == length)
		key = 1;
	i = 0;
	key1 = 0;
	while (f(tab[i], tab[i + 1]) >= 0 && i < length - 1)
		i++;
	if (i == length)
		key1 = 1;
	if (key == 1 || key1 == 1)
		sort = 1;
	return (sort);
}
