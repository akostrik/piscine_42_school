/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:47:14 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/23 01:19:52 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
		write(1, c++, 1);
	*c = '\n';
	write(1, c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] == '\0')
			return (-1);
		if (s2[i] == '\0')
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
}

void	ft_put_notneg_nbr(int nb)
{
	int		n;
	int		i;
	char	str[12];

	if (nb == 0)
	{
		write (1, "0\n", 2);
		return ;
	}
	n = nb;
	i = 0;
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	str[i] = '\0';
	ft_putstr(str);
}

void	ft_show_one_structure(struct s_stock_str *par)
{
	if (par == NULL)
		return ;
	ft_putstr(par -> str);
	ft_put_notneg_nbr(par -> size);
	ft_putstr(par -> copy);
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (par == NULL)
		return ;
	while (1)
	{
		if (par -> str == NULL)
			break ;
		ft_show_one_structure(par);
		par++;
	}
}
