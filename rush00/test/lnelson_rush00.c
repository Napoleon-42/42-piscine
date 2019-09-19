/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lnelson_rush00.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:25:07 by lnelson           #+#    #+#             */
/*   Updated: 2019/08/31 15:05:31 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_disp_line(char a, char b, char c, int size) //write a line with (first char, body char, last char, line size)
{
	int i;

	i = 0;
	while ( i < size)
	{
		if ( i == 0 )
			ft_putchar(a);
		else if ( i == ( size -1))
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	int i;
	char a;
	char b;
	char c;
	char space;

	a = 'o';
	b = '-';
	c = '|';
	space = ' ';
	i = 0;
	while(i < y)
	{
		if (i == 0 || i == ( y - 1 ))
			ft_disp_line(a, b, a, x);
		else
			ft_disp_line(c, space, c, x);
		i++;
	}
}

int main()
{
	rush00(1, 5);
	return (0);
}
