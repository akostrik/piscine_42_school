/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:07:52 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/29 01:00:44 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// renvoie le n-ième élément de la liste (le premier élément est l’élément 0)
// renverra un pointeur nul en cas d’erreur

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*cour;
	int		i;

	if (begin_list == NULL)
		return (NULL);
	cour = begin_list;
	i = 0;
	while (1)
	{
		if (i == nbr - 1)
			return (cour);
		if (cour == NULL)
			return (NULL);
		cour = cour -> next;
		i++;
	}
}