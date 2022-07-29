/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:29:06 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/18 09:55:11 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Appends the src to the dest, overwriting '\0' at the end of dest, then adds \0
the resulting string in dest is always null-terminated.
____________________________
The strings may not overlap
The dest string must have enough space for the result,
If dest is not large enough, prog behavior is unpredictable
*/

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
