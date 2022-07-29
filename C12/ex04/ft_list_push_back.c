/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:07:23 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/29 01:29:21 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*return_and_delete_last_elt(t_list *begin_list)
{
	t_list	*cour;

	cour = begin_list;
	while(cour -> next != NULL)
	{
		//printf_element(cour,"");
		cour = cour -> next;
	}
	return (cour);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_el;

	new_el = (t_list *)malloc(sizeof(t_list));
	new_el -> next = NULL;
	new_el -> data = data;

	t_list	*last_elt = return_and_delete_last_elt(*begin_list); 
	last_elt -> next = new_el;
}
