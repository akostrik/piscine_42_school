/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:23:58 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 01:26:33 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SSIZE_MAX the largest value that can fit in an object of type ssize_t
// the limit on the nb of bytes that can be read/written in a single operation

//              2 147 483 647  int
//              4 294 967 295  unsigned int
//  9 223 372 036 854 775 807  long
//  9 223 372 036 854 775 807  long long
// 18 446 744 073 709 551 615  unsigned long long
//  9 223 372 036 854 775 807  SSIZE_MAX

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "include.h"
#include "ft.h"

char	*ft_tail_one_file(int fd, long option)
{
	char	*buf1;
	char	*buf2;
	long	nb_bytes;

	buf1 = (char *)malloc(option * sizeof(char));
	if (buf1 == NULL)
		return (NULL);
	buf2 = (char *)malloc(option * sizeof(char));
	if (buf2 == NULL)
		return (NULL);
	buf2[0] = '\0';
	while (1)
	{
		ft_strcpy(buf1, buf2);
		nb_bytes = read(fd, buf2, option);
		if (nb_bytes < 0)
			return (NULL);
		if (nb_bytes < option)
		{
			buf2[nb_bytes] = '\0';
			return (ft_strcat(buf1 + nb_bytes, buf2));
		}
	}
}
