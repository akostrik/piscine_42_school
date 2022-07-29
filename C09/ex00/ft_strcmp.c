/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:26:34 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/25 22:40:42 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compares the two strings
The locale is not taken into account
negatif s1 < s2
equal
positiv s1 > s2
s1 is to be less  than, to match, or be greater than s2.
*/

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
