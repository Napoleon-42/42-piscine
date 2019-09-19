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

	i = 0;
	j = 0;
	int value = str[0] - '0';
	int	value2 = str[1] - '0';
	str_size = ft_strlen(str);
	//printf("%d\n", value);
	if (value == 1 && (value2 >= 1 && value2 <= 9))
	{	
		while (units_lib[i])
		{
			nb_out[i] = units_lib[value2 + 10][i];
			i++;
		}
		return (nb_out);		
	}	
	while (tens_lib[value][i])
	{
		nb_out[i] = tens_lib[value][i];
		i++;
	}
	while (units_lib[value2][j])
	{
		nb_out[i] = units_lib[value2][j];
		i++;
		j++;
	}
	return (nb_out);
}
int	main()
{
	printf("%s\n", num_to_char("48"));
	return (0);
}
