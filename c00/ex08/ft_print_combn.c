/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 14:21:46 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/09 09:06:28 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		*ft_last(int last[9], int n)
{
	int i;
	int j;

	j = 0;
	i = n - 1;
	while (i >= 0)
	{
		last[i] = 9 - j;
		j++;
		i--;
	}
	return (last);
}

void	ft_print_int_tab(int tab[9], int n)
{	
	int i;
	char c;
	
	i = 0;
	while (i < n)
	{
		c = tab[i] + 48;
		write(1, &c, 1);
		i++;
	}
	
}

int		ft_cmp_int_tab(int *tab, int *tab2, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (tab[i] != tab2[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_verif(int *num, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (num[i] >= num[i - 1])
			return (0);
		i++; 
	}
	ft_print_int_tab(num, n);
	write(1, "  ", 2);
	return (1);
}

void	ft_print_combn(n)
{
	int num[9] = {0};
	int last[9] = {0};
	int i;

	ft_last(last, n);
	ft_print_int_tab(num, n);
	write(1, "\n", 1);
	while (ft_cmp_int_tab(num, last, n) == 0)
	{
		i = 0;
		num[n - 1]++;
		while (++i < n)
			if (num[n - i] >= 9)
			{
				num[n - 1 - 1]++;
				while(i < n)
				{
				num[n - 1 -i] = num[n - i - 1] + 1;
				i++;
				}
			}
		ft_print_int_tab(num, n);
		ft_verif(num, n);	
	}
}

int main()
{
	int n = 9;
	int num[9] = {0};
	ft_print_combn(3);
	ft_print_int_tab(num, n);
	write(1 ," ", 1);
	int last[9] = {0};
	ft_print_int_tab(last, n);
	write(1, " ", 1);
	ft_last(last, n);
	ft_print_int_tab(last, n);
	return (0);
}