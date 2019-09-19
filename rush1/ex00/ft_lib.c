/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:22:04 by lnelson           #+#    #+#             */
/*   Updated: 2019/09/08 23:20:03 by lnelson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_all(int a)
{
	if (a == 0)
		return ("1234");
	else if (a == 1)
		return ("1243");
	else if (a == 2)
		return ("1324");
	else if (a == 3)
		return ("1342");
	else if (a == 4)
		return ("1432");
	else if (a == 5)
		return ("1423");
	else if (a == 6)
		return ("2134");
	else if (a == 7)
		return ("2143");
	else if (a == 8)
		return ("2341");
	else if (a == 9)
		return ("2314");
	else if (a == 10)
		return ("2431");
	return ("2413");
}

char	*ft_str_all_p(int a)
{
	if (a == 13)
		return ("3142");
	else if (a == 12)
		return ("3124");
	else if (a == 14)
		return ("3214");
	else if (a == 15)
		return ("3241");
	else if (a == 16)
		return ("3412");
	else if (a == 17)
		return ("3421");
	else if (a == 18)
		return ("4123");
	else if (a == 19)
		return ("4132");
	else if (a == 20)
		return ("4231");
	else if (a == 21)
		return ("4213");
	else if (a == 22)
		return ("4312");
	return ("4321");
}

char	*ft_str_line(int a)
{
	if (a <= 11)
		return (ft_str_all(a));
	else
		return (ft_str_all_p(a));
}
