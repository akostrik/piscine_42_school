/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:18:26 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/20 18:08:20 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* returns a pointer to a new string which is a duplicate of s
Memory for the new string is obtained with malloc(3), 
and can be freed with free(3)

On success, returns a pointer to the duplicated string
Returns NULL if insufficient memory was available
with errno set to indicate the cause of the error

ERRORS ENOMEM Insufficient memory available to allocate string
ENOMEM = Error NO MEMory
ENOMEM Not enough space/cannot allocate memory (POSIX.1-2001)

errno = переменная, хранящая код последней ошибки
В каждом потоке своя лок errno
При запуске программы значение errno равно нулю.
*/

#include <stdlib.h>
#include <errno.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_str;

	i = 0;
	while (src[i] != 0)
		i++;
	new_str = (char *)malloc ((i + 1) * sizeof(char));
	if (new_str == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
