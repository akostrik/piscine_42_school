/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:18:35 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/20 18:08:36 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Si size = 0, retourner une chaîne de caractères vide que l’on peut free()

#include <stdlib.h>

int	calculate_size_separateur(char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

int	calculate_final_size_with_0(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	final_size;
	int	size_sep;

	size_sep = calculate_size_separateur(sep);
	i = 0;
	final_size = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			final_size++;
			j++;
		}
		final_size += size_sep;
		i++;
	}
	final_size -= size_sep;
	final_size++;
	return (final_size);
}

char	*empty_str(void)
{
	char	*empty_str;

	empty_str = (char *)malloc(sizeof(char));
	empty_str[0] = '\0';
	return (empty_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*to_return;
	int		size_to_return;
	int		i;
	int		j;
	int		k;

	if (size == 0)
		return (empty_str());
	size_to_return = calculate_final_size_with_0(size, strs, sep);
	to_return = (char *)malloc(size_to_return * sizeof(char));
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			to_return[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0')
			to_return[k++] = sep[j++];
		i++;
	}
	to_return[size_to_return - 1] = '\0';
	return (to_return);
}
