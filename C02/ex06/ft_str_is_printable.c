/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:42:13 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/13 10:42:16 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
ASCII:
  0	0x00	NULL
.........
 31	0x1F	INFORMATION SEPARAT
127	0x7F	DELETE

1ISO 8859:
 27	0x80	PADDING CHARACTER
........
159	0x9F	APPLICATION PROGRAM COMMAND

Unicode:
034F
.........
*/
