/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:02:25 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/10 18:02:32 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;
	char	buffer[5];

	i = -1;
	buffer[3] = ',';
	buffer[4] = ' ';
	while (i++ <= 8)
	{
		j = i;
		while (j++ <= 8)
		{
			k = j;
			while (k++ <= 8)
			{
				buffer[0] = '0' + i;
				buffer[1] = '0' + j;
				buffer[2] = '0' + k;
				if (!(i == 7 && j == 8 && k == 9))
					write (1, buffer, 5);
			}
		}
	}
	write (1, buffer, 3);
}
