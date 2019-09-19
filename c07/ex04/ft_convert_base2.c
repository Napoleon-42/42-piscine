/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:14:56 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/17 16:37:10 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strchar(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_start(char *str, int *j)
{
	int moin;
	int i;

	i = 0;
	moin = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			moin++;
		i++;
	}
	*j = i;
	return (moin);
}

int		ft_atoi_base(char *str, char *base)
{
	int				i;
	int				res;
	unsigned int	res1;
	int				moin;
	int				*j;

	i = 0;
	j = &i;
	res = 0;
	res1 = 0;
	moin = ft_start(str, j);
	while (ft_strchar(base, str[i]) != -1)
	{
		res1 = ft_strlen(base) * res1 + ft_strchar(base, str[i]);
		i++;
	}
	if (moin % 2 != 0)
	{
		res = res1 * -1;
		return (res);
	}
	res = res1;
	return (res);
}
