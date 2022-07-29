/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:09:04 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 20:08:15 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{	
	t_list	*new_el;

	new_el = (t_list *)malloc(sizeof(t_list));
	new_el -> next = *begin_list;
	new_el -> data = data;

	*begin_list = new_el;
}
