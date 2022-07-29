/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:07:09 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 19:39:28 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*cour;
	int		list_size;

	cour = begin_list;
	list_size = 0;
	while(cour != NULL)
	{
		cour = cour -> next;
		list_size++;
	}
	return (list_size);
}