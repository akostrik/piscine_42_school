/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:29:23 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/19 00:09:13 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Finds the first occurrence of to_find
'\0' are not compared
Returns a pointer to the beginning of the located substring, NULL if not found
*/

#include <stddef.h>

int	pattern_is_here(char *str, char *pattern)
{
	int	i;

	i = 0;
	while (pattern[i] != '\0')
	{
		if (pattern[i] == '\0' && str[i] != '\0')
			return (1);
		if (pattern[i] == '\0' && str[i] == '\0')
			return (1);
		if (pattern[i] != '\0' && str[i] == '\0')
			return (0);
		if (str[i] != pattern[i])
			return (0);
		if (str[i] == pattern[i])
			i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *pattern)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (pattern_is_here(&str[i], pattern) == 1)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
