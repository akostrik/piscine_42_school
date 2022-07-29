/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:07:33 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 23:07:45 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front2(t_list **begin_list, void *data)
{	
	t_list	*new_el;

	new_el = (t_list *)malloc(sizeof(t_list));
	new_el -> next = *begin_list;
	new_el -> data = data;

	*begin_list = new_el;
}

t_list	*ft_create_elem2(void *data)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	lst -> next = NULL;
	lst -> data = data;
	return (lst);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;

	t_list **new_lst;
	new_lst = (t_list **)malloc(sizeof(t_list *));

	if (size == 0)
		return (NULL);
	i = 0;
	*new_lst = ft_create_elem2(strs[0]);
	i = 1;
	while (i < size)
	{
		ft_list_push_front2(new_lst, strs[i]);
		i++;
	}
	return (*new_lst);
}