/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 19:54:55 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/08 04:00:22 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char const *argv[])
{
	int tab[5] = {12, 8, 16, 5, 3};
	int i = 0;
	ft_sort_int_tab(tab, 5);
	while (i++ < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}
