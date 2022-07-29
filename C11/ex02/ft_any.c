/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:16:54 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 12:50:30 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	char	**t;

	if (tab == NULL)
		return (0);
	t = tab;
	while (1)
	{
		if (*t == NULL)
			break ;
		if (f(*t) != 0)
			return (1);
		t++;
	}
	return (0);
}
