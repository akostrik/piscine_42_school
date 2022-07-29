/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:43:31 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/13 10:43:35 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// non tested on negative values -

#include <unistd.h>
#include <stdio.h>

int		is_printable(char c);
void	convert_to_hex_string(char *buf, char n);
char	one_digit_as_char(int digit);

void	ft_putstr_non_printable(char *str)
{
	size_t	i;
	char	buf[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			convert_to_hex_string(buf, str[i]);
			write(1, buf, 3);
		}
		i++;
	}
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	convert_to_hex_string(char *buf, char n)
{
	buf[0] = '\\';
	buf[1] = one_digit_as_char((n - n % 16) / 16);
	buf[2] = one_digit_as_char(n % 16);
}

char	one_digit_as_char(int digit)
{
	if (digit >= 0 && digit <= 9)
		return ('0' + digit);
	if (digit >= 10 && digit <= 15)
		return ('a' + digit - 10);
	return (' ');
}
