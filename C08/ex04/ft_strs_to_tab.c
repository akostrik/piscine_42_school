/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:58:16 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/22 23:29:12 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// free 
// 0 = NULL "0" \0

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_str	*terminating_structure(void)
{
	t_stock_str	*structure;

	structure = (t_stock_str *)malloc(sizeof(structure));
	if (structure == NULL)
		return (NULL);
	structure -> str = NULL;
	return (structure);
}

struct s_stock_str	*structure_with_values(t_stock_str *structure, char *str)
{
	int	i;

	structure -> size = ft_strlen(str);
	i = 0;
	while (i < ft_strlen(str))
	{
		structure -> str[i] = str[i];
		structure -> copy[i] = str[i];
		i++;
	}
	return (structure);
}

struct s_stock_str	*ft_str_to_tab(char *str)
{
	t_stock_str	*structure;

	if (str == NULL)
		return (terminating_structure());
	structure = (t_stock_str *)malloc(sizeof(structure));
	if (structure == NULL)
		return (NULL);
	structure -> str = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (structure -> str == NULL)
	{
		free(structure);
		return (NULL);
	}
	structure -> copy = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (structure -> copy == NULL)
	{
		free(structure -> str);
		free(structure);
		return (NULL);
	}
	return (structure_with_values(structure, str));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*structures;
	t_stock_str	*next_structure;

	structures = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (structures == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		next_structure = ft_str_to_tab(av[i]);
		if (next_structure == NULL)
			return (NULL);
		structures[i] = *next_structure;
		i++;
	}
	next_structure = ft_str_to_tab(0);
	if (next_structure == NULL)
		return (NULL);
	structures[i] = *next_structure;
	return (structures);
}
