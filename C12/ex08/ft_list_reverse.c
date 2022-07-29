/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:07:58 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/29 01:52:32 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h" /////////////////////////////////// УДАЛИТЬ

t_list	*return_and_delete_last_elt2(t_list **lst)
{
	t_list	*cour1;
	t_list	*cour2;

	if (lst == NULL)
		return (NULL);
	if (*lst == NULL)
		return (NULL);
	if ((*lst) -> next == NULL)
	{
		*lst = NULL; 
		return (NULL);
	}
	cour1 = *lst;
	cour2 = cour1 -> next;
	while(cour2 != NULL)
	{
		cour1 = cour2;
		cour2 = cour2 -> next;
	}
	cour1 -> next = NULL;
	return (cour2);
}

void	ft_list_push_front3(t_list **begin_list, t_list *new_elt)
{	
	new_elt -> next = *begin_list;
	*begin_list = new_elt;
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	**inverted_lst;
	t_list	*last_elt_1st_list;

	inverted_lst = (t_list **)malloc(sizeof(t_list *));
	while (1)
	{
		last_elt_1st_list = return_and_delete_last_elt2(begin_list);
		if (last_elt_1st_list == NULL)
			break ;
		ft_list_push_front3(inverted_lst, last_elt_1st_list);
	}	
	*begin_list = *inverted_lst;
}