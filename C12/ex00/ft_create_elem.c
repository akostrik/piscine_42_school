/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:09:01 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 23:17:23 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	lst -> next = NULL;
	lst -> data = data;
	return (lst);
}
