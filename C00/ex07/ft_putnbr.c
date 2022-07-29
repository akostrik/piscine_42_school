/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:02:56 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/10 18:02:58 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define MAXLENGTH 11

void	write_int_min(void);

void	ft_putnbr(int nb)
{
	int		n;
	char	buf[MAXLENGTH];
	int		pos;
	char	c;

	if (nb == -2147483648)
		write_int_min();
	else
	{
		n = nb;
		pos = 0;
		if (nb < 0)
		{
			c = '-';
			write (1, &c, 1);
			n = -nb;
		}
		while (n > 0)
		{
			buf[pos++] = n % 10 + '0';
			n = n / 10;
		}
		while (pos >= 0)
			write (1, &buf[pos--], 1);
	}
}

void	write_int_min(void)
{
	char	buf[11];

	buf[0] = '-';
	buf[1] = '2';
	buf[2] = '1';
	buf[3] = '4';
	buf[4] = '7';
	buf[5] = '4';
	buf[6] = '8';
	buf[7] = '3';
	buf[8] = '6';
	buf[9] = '4';
	buf[10] = '8';
	write (1, &buf, 11);
}
