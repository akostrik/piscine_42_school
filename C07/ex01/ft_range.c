/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:18:39 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/20 13:19:13 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc setd errno = ENOMEM 

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	size = max - min;
	if (size <= 0)
		return (NULL);
	tab = (int *)malloc (size * sizeof(int));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
