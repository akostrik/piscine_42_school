/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:48:06 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/27 18:18:44 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*next_substring(char *str, int first_pos_substring, int substr_length)
{
	int		i;
	char	*substring;

	substring = (char *)malloc((substr_length + 1) * sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < substr_length)
	{
		substring[i] = str[first_pos_substring + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

int	calc_length(int i, char *str, char *charset, int separator_or_not)
{
	int	length;

	length = 0;
	while (str[i] != '\0' && is_separator(str[i], charset) == separator_or_not)
	{
		i++;
		length++;
	}
	return (length);
}

char	**tab_allocation(char *str, char *charset)
{
	int		nb_substrings;
	char	**tab;
	int		i;

	i = 0;
	nb_substrings = 0;
	while (1)
	{
		while (str[i] != '\0' && is_separator(str[i], charset) == 1)
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != '\0' && is_separator(str[i], charset) == 0)
			i++;
		nb_substrings++;
	}
	tab = (char **)malloc((nb_substrings + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		num_word;
	int		length;
	int		i;

	tab = tab_allocation(str, charset);
	if (tab == NULL)
		return (NULL);
	num_word = 0;
	i = 0;
	while (1)
	{
		length = calc_length(i, str, charset, 1);
		i += length;
		if (str[i] == '\0')
			break ;
		length = calc_length(i, str, charset, 0);
		tab[num_word] = next_substring(str, i, length);
		if (tab[num_word] == NULL)
			return (NULL);
		i += length;
		num_word++;
	}
	tab[num_word] = 0;
	return (tab);
}
