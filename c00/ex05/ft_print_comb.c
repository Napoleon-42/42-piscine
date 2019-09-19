/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 12:34:58 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/08 06:14:45 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_display(a, b, c);
				if (a != 7)
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}

