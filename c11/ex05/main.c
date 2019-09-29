/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 15:25:05 by napoleon          #+#    #+#             */
/*   Updated: 2019/09/29 19:37:24 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_plus(int a, int b);
int ft_minus(int a, int b);
int ft_div(int a, int b);
int ft_multi(int a, int b);
int ft_modul(int a, int b);

typedef struct  operators
{
    char op;
    int (*ft)(int a, int b);
}               operators;


void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    unsigned int    nb;
    if (nbr < 0)
    {
        nb = -nbr;
        ft_putchar('-');
    }
    else 
        nb = nbr;
    if (nb / 10 != 0)
        ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + 48);
}

int	ft_atoi(char *str)
{
	int				i;
	int				moin;
	int				res;
	unsigned int	res1;

	i = 0;
	moin = 0;
	res1 = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
	|| str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			moin++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res1 = (res1 * 10) + (str[i] - 48);
		i++;
	}
	if (moin % 2 != 0)
		return (res = res1 * -1);
	return (res = res1);
}

int main(int ac, char **av)
{
    operators array[5];
    array[0].op = '+';
    array[0].ft = &ft_plus; 

    array[1].op = '-';
    array[1].ft = &ft_minus;
    
    array[2].op = '/';
    array[2].ft = &ft_div;
    
    array[3].op = '*';
    array[3].ft = &ft_multi;
    
    array[4].op = '%';
    array[4].ft = &ft_modul;

    int i;

    i = 0;
    while (array[i].op != av[2][0])
    {
        i++;
        if (i == 5)
            return 0;
    }
    ft_putnbr(array[i].ft(ft_atoi(av[1]), ft_atoi(av[3])));
    return 0;
}