/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numtochar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:00:41 by suahn             #+#    #+#             */
/*   Updated: 2019/09/14 22:12:54 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**num_to_char(char *str)
{
	char 	*units_lib[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",	"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char	*tens_lib[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	char	*hundred_lib[] = {"", "hundred"};
	char	*big_lib[] = {"","thousand", "million", "billion", "trillion", "quadrillion", "uintillion", "sextillion", "septillion", "octillion", "nonillion", "decillion", "undecillion"};

	int size;
	//		char *nb_out =(char *)malloc (sizeof(char) * 10); 
	//
	char **nb_out = (char**)malloc(sizeof(char*) * 12);
	for (int n=0; n <12; n++)
		nb_out[n] = (char*)malloc(sizeof(char) * 12);
	int i;
	int b;

	i = 0;
	b = 12;
	size = ft_strlen(str);

	//while ((size - 2) / 3 < 12) // recursive  = 12 times
	while (i < size && str[i])
	{
		if ((size - 2 - i) / 3 == b)
		{
			nb_out[i][0] = big_lib[b][0];
			b--;
			i++;
		}
		if ((size - 2 - i) % 3 == 2) // 100
		{
			nb_out[i][0] = units_lib[str[i] % 10][0] + hundred_lib[1][0];
			i++;
		}
		if ((size - 2 - i) % 3 == 1) // 10
		{
			if (str[i] == 1)
			{
				nb_out[i][0] = tens_lib[(str[i+1] % 10) + 10][0];
				i++;
			}
			else
			{
				nb_out[i][0] = tens_lib[str[i] % 10][0];
				i++;
			}
		}
		if ((size - 2 - i) % 3 == 0) // 1- 9
		{
			nb_out[i][0] = units_lib[str[i] % 10][0];
			i++;
		}	
		i++;
		printf("%d\n",i);
	}
	return (nb_out);
}

/*int	main()
{
	char **x = num_to_char("148");
	int i = 0;
	while(x[i])
	{
	printf("%s\n", x[i]);
	i++;
	}
	return(0);
}
*/
int main(int argc, char **argv)
{
	int i;
	i = 0;
	while (argv[i] != '\0')
	{
		printf("%s\n", argv[i]);
		i++;
	}
	num_to_char("0020030");
	return 0 ;
}


//my code has a problem --- it's infinite loop !!! plz help 
