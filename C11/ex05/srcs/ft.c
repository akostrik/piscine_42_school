/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:56:45 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 16:57:50 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_whitespace(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	to_return;

	i = 0;
	while (is_whitespace(str[i]) == 1)
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = (-1) * sign;
		i++;
	}
	to_return = 0;
	while (is_numeric(str[i]) == 1)
	{
		to_return = to_return * 10 + str[i] - '0';
		i++;
	}
	return (sign * to_return);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
