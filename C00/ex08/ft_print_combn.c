/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:03:06 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/10 18:03:13 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		*calculate_next_number(char *buf, int n);
int		count_shift_left(char *buf, int n);
int		count_nb_numbers(int n);
int		factorial(int n);

void	ft_print_combn(int n)
{
	char	buf[11];
	int		i;
	int		nb_numbers;

	i = 0;
	while (i < n)
	{
		buf[i] = '0' + i;
		i++;
	}
	buf[n] = ',';
	buf[n + 1] = ' ';
	nb_numbers = count_nb_numbers(n);
	i = 0;
	while (i++ < nb_numbers - 1)
	{
		write (1, &buf[0], n + 2);
		calculate_next_number(buf, n);
	}
	write (1, &buf[0], n);
}

int	*calculate_next_number(char *buf, int n)
{
	int	pos;

	pos = n - 1 - count_shift_left(buf, n);
	buf[pos]++;
	while (++pos <= n - 1)
		buf[pos] = buf[pos - 1] + 1;
	return (0);
}

int	count_shift_left(char *buf, int n)
{
	int	pos;

	pos = n - 1;
	while (buf[pos] == '0' + 10 - n + pos)
		pos--;
	return (n - 1 - pos);
}

int	count_nb_numbers(int n)
{
	return (factorial(10) / (factorial(10 - n) * factorial(n)));
}

int	factorial(int n)
{
	int	i;
	int	to_return;

	if (n == 0)
		return (1);
	i = n;
	to_return = 1;
	while (i > 0)
	{
		to_return *= i;
		i--;
	}
	return (to_return);
}
