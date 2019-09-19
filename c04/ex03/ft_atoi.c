/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:14:42 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/10 14:29:33 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
