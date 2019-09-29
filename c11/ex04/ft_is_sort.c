/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:02:38 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/29 03:18:33 by napoleon         ###   ########.fr       */
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
	if (i == length - 1)
		key = 1;
	i = 0;
	key1 = 0;
	while (f(tab[i], tab[i + 1]) >= 0 && i < length - 1)
		i++;
	if (i == length - 1)
		key1 = 1;
	if (key == 1 || key1 == 1)
		sort = 1;
	return (sort);
}

int ft_sort(int a, int b)
{
	if (a == b)
		return (0);
	else if (a < b)
		return (-1);
	else
		return (1);
}

/*int main()
**{
**	printf("%d\n", ft_sort(1, 0));
**	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
**	int tab2[] = {0, 1, 2, 3, 4, 9, 6, 7, 8, 5};
**	int tab3[] = {13, 8, 7, 6, 6, 6, 3, 3, 1, 0};
**	int (*f)(int a, int b);
**	f = &ft_sort; 
**	printf("%d\n", ft_is_sort(tab, 10, f));
**	printf("%d\n", ft_is_sort(tab2, 10, f));
**	printf("%d\n", ft_is_sort(tab3, 10, f));
**	return 0;
**}
*/
