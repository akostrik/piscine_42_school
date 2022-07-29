/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:29:16 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/18 09:52:36 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Appends the src to the dest, overwriting '\0' at the end of dest, then adds \0
The strings may not overlap
The dest string must have enough space for the result (behavior unpredictable)

use at most n bytes from src
src does not need to be null-terminated if it contains n or more byte
the resulting string is always null-terminated.
If src >=n bytes, writes n+1 bytes to dest (n from src plus + \0) =>
the size of dest must be at least strlen(dest)+n+1.
*/

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && (unsigned int)j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
