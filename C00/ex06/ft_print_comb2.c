/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:02:42 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/10 18:02:45 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		n;
	int		m;
	char	buffer[7];

	buffer[2] = ' ';
	buffer[5] = ',';
	buffer[6] = ' ';
	n = 0;
	while (n <= 98)
	{
		buffer[0] = '0' + n / 10;
		buffer[1] = '0' + n % 10;
		m = n + 1;
		while (m <= 99)
		{
			buffer[3] = '0' + m / 10;
			buffer[4] = '0' + m % 10;
			if (n < 98)
				write (1, &buffer, 7);
			else
				write (1, &buffer, 5);
			m++;
		}
		n++;
	}
}
