/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_foreach.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:20:31 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 17:28:03 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_foreach.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr = begin_list;

	while (list_ptr)
	{
		(*f)(list_ptr->data);

		list_ptr = list_ptr->next;
	}
}