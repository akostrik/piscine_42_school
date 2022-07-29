/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:56:45 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/15 00:03:01 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c);
int	is_numeric(char c);
int	is_whitespace(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	to_return;

	while (is_whitespace(str[i]) == 1)
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = (-1) * sign;
		i++;
	}
	while (str[i] == '0')
		i++;
	to_return = 0;
	while (is_numeric(str[i]) == 1)
	{
		to_return = to_return * 10 + str[i] - '0';
		i++;
	}
	to_return = sign * to_return;
	return (to_return);
}

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
