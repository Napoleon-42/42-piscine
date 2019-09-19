/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:11:27 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/15 20:00:41 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DICT_ERROR  ("Dict Error\n")
#define ERROR		("Error\n")

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i] - 48;
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_errors(char *dico, char **av, int ac)
{
	int i;
	int j;

	j = 0;
	if (ac == 2)
		i = 1;
	if (ac == 3)
		i = 2;
	while (av[i][j] != '\0')
	{
		if (!(av[i][j] >= '0' && av[i][j] <= '9'))
			return (0);
		j++;
	}
	if (j >= 71)
		return (-1);
	return (1);
}

int		main(int argc, char **argv)
{
	char	*dict;
	char	*file_name;

	if (argc == 3)
	{
		file_name = malloc(1 + ft_strlen(argv[1]) * sizeof(char));
		ft_strcpy(file_name, argv[1]);
		file_name[ft_strlen(argv[1])] = '\0';
	}
	if (argc == 2)
		file_name = "numbers.dict";
	dict = ft_dic_to_str(file_name);
	if (ft_errors(dict, argv, argc) == -1)
	{
		write(1, DICT_ERROR, 11);
		return (0);
	}
	if (ft_errors(dict, argv, argc) == 0)
	{
		write(1, ERROR, 6);
		return (0);
	}
	//mettre la fonction
	return (0);
}
