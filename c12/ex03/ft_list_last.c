/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:47:48 by napoleon          #+#    #+#             */
/*   Updated: 2019/09/30 15:56:55 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list *temp;
	int i;

	i = 0;
	temp = begin_list;
	if (temp)
		while (temp->next)
		{
			temp = temp->next;
		}
	return (temp);
}