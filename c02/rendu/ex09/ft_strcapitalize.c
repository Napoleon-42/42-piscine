/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:12:24 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/01 19:12:25 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strlowrcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowrcase(str);
	if (*str >= 'a' && *str <= 'z')
		*str = *str - 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') &&
		(!(str[i - 1] >= '0' && str[i - 1] <= '9') &&
		!(str[i - 1] >= 'a' && str[i - 1] <= 'z') &&
		!(str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
