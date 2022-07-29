/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:56:28 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 17:00:30 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include "../includes/include.h"

void	ft_putnbr(int nb)
{
	int		i;
	char	str[12];

	if (nb == INT_MIN)
		write(1, "-2147483648\n", 12);
	if (nb == 0)
		write(1, "0\n", 2);
	if (nb == INT_MIN || nb == 0)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	str[11] = '\0';
	i = 10;
	while (nb > 0)
	{
		str[i--] = '0' + nb % 10;
		nb = nb / 10;
	}
	ft_putstr(&str[i + 1]);
	ft_putstr("\n");
}
