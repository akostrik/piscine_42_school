/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:18:32 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/20 18:08:14 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// malloc задает errno = ENOMEM 
// *range[i] ?!

#include <stdlib.h>

int	ft_ultimate_range(int **tab, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*tab = NULL;
		return (0);
	}
	*tab = (int *)malloc (size * sizeof(int));
	if (*tab == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*tab)[i] = min + i;
		i++;
	}
	return (max - min);
}
