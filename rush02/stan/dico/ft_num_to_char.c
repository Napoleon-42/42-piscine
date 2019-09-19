/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_to_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:34:39 by mvaldes           #+#    #+#             */
/*   Updated: 2019/09/14 14:51:16 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*num_to_char(char *str)
{
	char	*units_lib[] = {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char	*tens_lib[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

	int	str_size;
	char *nb_out = malloc (10 * 4);
	int i;
	int j;
	int k;
	int value;
	int value2;

	i = 0;
	j = 0;
	k = 0;
	str_size = ft_strlen(str);
	//printf("%d\n", value);
	while (k < str_size)
	{
		if (size == 3)

		value = str[k] - '0';
		value2 = str[k + 1] - '0';
		if (str_size - k == 2 && value == 1 && (value2 >= 1 && value2 <= 9))
		{	
			while (units_lib[i])
			{
				nb_out[i] = units_lib[value2 + 10][i];
				i++;
			}
			free(nb_out);
			return (nb_out);		
		}	
		while (tens_lib[value][i])
		{
			nb_out[i] = tens_lib[value][i];
			i++;
		}
		k++;
	}
	return (nb_out);
}
int	main()
{
	printf("%s\n", num_to_char("148"));
	return (0);
}
