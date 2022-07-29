/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:07:17 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 19:40:44 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
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
