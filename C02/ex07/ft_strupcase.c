/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:42:24 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/13 10:42:37 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// argument = array (str10)						OK
// argument = a pointer to a string (char *str)	NO

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
