/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:25:30 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 12:54:38 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*ret;

	i = 0;
	ret = (int *)malloc(length * sizeof(int));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}
