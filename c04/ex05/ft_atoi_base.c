/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:59:35 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/13 03:50:39 by lnelson          ###   ########.fr       */
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

int		ft_verif_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == ' ' || base[i] == '\n' || base[i] == '\r' ||
		base[i] == '\t' || base[i] == '\v' || base[i] == '\f' ||
		base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
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

	if (ft_verif_base(base) == 0)
		return (0);
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

int main(int ac, char **av)
{
	printf("%d\n", ft_atoi_base(av[1], av[2]));
	return 0;
}