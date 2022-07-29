/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:56:28 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/15 00:02:47 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	put_int_min(void);
void	ft_putstr2(char *str);
void	put_minus(void);
void	put_zero(void);

void	ft_putnbr(int nb)
{
	int		i;
	char	str[12];

	if (nb == INT_MIN)
		put_int_min();
	if (nb == 0)
		put_zero();
	if (nb == INT_MIN || nb == 0)
		return ;
	if (nb < 0)
	{
		put_minus();
		nb = -nb;
	}
	str[11] = '\0';
	i = 10;
	while (nb > 0)
	{
		str[i--] = '0' + nb % 10;
		nb = nb / 10;
	}
	ft_putstr2(&str[i + 1]);
}

void	put_zero(void)
{
	char	c;

	c = '0';
	write(1, &c, 1);
}

void	put_minus(void)
{
	char	c;

	c = '-';
	write(1, &c, 1);
}

void	put_int_min(void)
{
	char	c;

	c = '-';
	write(1, &c, 1);
	c = '2';
	write(1, &c, 1);
	c = '1';
	write(1, &c, 1);
	c = '4';
	write(1, &c, 1);
	c = '7';
	write(1, &c, 1);
	c = '4';
	write(1, &c, 1);
	c = '8';
	write(1, &c, 1);
	c = '3';
	write(1, &c, 1);
	c = '6';
	write(1, &c, 1);
	c = '4';
	write(1, &c, 1);
	c = '8';
	write(1, &c, 1);
}

void	ft_putstr2(char *str)
{
	int	i ;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}
