/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:43:08 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/13 10:43:10 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		calculate_next_word_length(char *str);
int		is_alphanumeric(char c);
char	*treat_one_word(char *str, int size);

char	*ft_strcapitalize(char *str)
{
	size_t	i;
	int		next_word_length;

	i = 0;
	while (str[i] != '\0')
	{
		next_word_length = calculate_next_word_length(str + i);
		if (next_word_length > 0)
			treat_one_word(str + i, next_word_length);
		i += next_word_length + 1;
	}
	return (str);
}

int	calculate_next_word_length(char *str)
{
	size_t	i;

	i = 0;
	while (is_alphanumeric(*(str + i)))
		i++;
	return ((int)i);
}

int	is_alphanumeric(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*treat_one_word(char *str, int size)
{
	size_t	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while ((int)i < size)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
