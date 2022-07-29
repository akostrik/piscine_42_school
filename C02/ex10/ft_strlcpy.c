/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:43:20 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/13 10:43:22 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copies up to size - 1 characters from the NUL-terminated string src,
NUL-terminates the result (as long as size is larger than 0)
A byte for the NUL should be included in size
src must be NUL-terminated
Takes the full size of the buffer (not just the length)
Returns the total length of the string it tried to create = the length of src
If traverses size characters without finding a NUL => the string length = size
and dest string will not be NUL-terminated
(there was no space for the NUL).
*/

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while ((int)i <= (int)size - 1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (i + 1);
		i++;
	}
	dest[i - 1] = '\0';
	return ((unsigned int)i + 1);
}
