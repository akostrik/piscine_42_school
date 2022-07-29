/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:16:04 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 12:45:05 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (i < length)
	{
		if (tab[i] != NULL && f(tab[i]) != 0)
			ret++;
		i++;
	}
	return (ret);
}
