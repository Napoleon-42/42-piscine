/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 04:37:41 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/18 18:33:18 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] < str2[i])
			return (str1[i] - str2[i]);
		else if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
