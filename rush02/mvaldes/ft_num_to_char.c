/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_to_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaldes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 11:34:39 by mvaldes           #+#    #+#             */
/*   Updated: 2019/09/15 12:31:10 by mvaldes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*units_lib[] = {"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char	*tens_lib[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
int	ft_strlen(char *str)
{
	int i;
	char *result;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*convert_to_digit(int n, char *suffix)
{
	int i;
	char *result = malloc(4 * 4);

	i = 0;
	if (n == 0)
		return ("");
	if (n > 19)
	{
		i = 0;
		while (tens_lib[n / 10][i])
		{
			result[i] = tens_lib[n / 10][i];
			i++;
		}
		j = 0;
		while (units_lib[n % 10][i])
		{
			result[i] = units_lib[n % 10][j];
			i++;
			j++;
		}
		j = 0;
		while (suffix[i])
		{
			result[i] = suffix[j];
			i++;
			j++;
		}
			return (result);
	}
	else
	{
		i = 0;
		while (units_lib[n][i] && suffix[i])
		{
			result[i] = units[n][i];
			i++;
		}
		while (suffix[i])
		{
			result[i] = suffix[j];
			i++;
			j++;
		}
		return (result);
	}
}

char	*num_to_char(char *str)
{
	int	str_size;
	char *nb_out = malloc (10 * 4);
	int res;

	str_size = ft_strlen(str);
	//printf("%d\n", value);
	int n = // convert str to nb

	if (n > 100 && n % 100)
	{
		res = "and " + res;
	}
	res = convert_to_digit(((n / 100) % 10), "Hundred ") + res;
	res = convert_to_digit(((n / 1000) % 100), "Thousand ") + res;
	res = convert_to_digit(((n / 100000) % 100), "Lakh, ") + res;
	res = convert_to_digit((n / 10000000) % 100, "Crore, ") + res;
	res = convert_to_digit((n / 1000000000) % 100, "Billion, ") + res;

	return (res);
}
int	main()
{
	printf("%s\n", num_to_char("20"));
//printf("%s\n", num_to_char("99"));
//printf("%s\n", num_to_char("1000"));
//printf("%s\n", num_to_char("200000"));
//printf("%s\n", num_to_char("123123123"));
	return (0);
}
