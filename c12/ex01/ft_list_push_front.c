/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:59:26 by napoleon          #+#    #+#             */
/*   Updated: 2019/09/30 14:43:01 by napoleon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list  *new;
	if(!(new = malloc(sizeof(t_list))))
		return (0);
	new->next = 0;
	new->data = data;
	return (new);
}

void    ft_push_front(t_list **begin_list, void *data)
{
	if (*begin_list == 0)
	   begin_list = ft_create_elem;
	else
	{
	   t_list *list;
	   list->data = data;
	   list->next = *begin_list;
	   *begin_list = list;
	}
}   