/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:07:42 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/29 01:50:40 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
// проверить список длины 1
{
	t_list	*cour1;
	t_list	*cour2;

	//printf("ft_list_clear %p\n",begin_list);
	cour1 = begin_list;
	if (cour1 == NULL)
		return ;
	cour2 = cour1 -> next;
	while(cour2 != NULL)
	{
		//printf("cour1 = %p, cour2 = %p : free_fct(%s), free(%p)\n",cour1, cour2,(char *)cour1 -> data,cour1);
		free_fct(cour1 -> data);
		free(cour1);
		cour1 = cour2;
		cour2 = cour2 -> next;
	}
	//printf("cour1 = %p, cour2 = %p          : free_fct(%s), free(%p)\n",cour1, cour2,(char *)cour1 -> data,cour1);
	free_fct(cour1 -> data);
	free(cour1);
}