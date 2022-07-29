/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:46:03 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/18 16:18:54 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
= Test 1 ===================================================
total 20
-rwxr-xr-x 1 deepthought root 16760 Jul 15 19:17 vfsaoaymekylk7o1m4mbc81r

$> ./vfsaoaymekylk7o1m4mbc81r
Command './vfsaoaymekylk7o1m4mbc81r' timed out after 10 seconds
*/

// 46340 * 46340 = 2 147 395 600
// INT_MAX         2 147 483 648
// 46431 * 46341 = 2 147 488 281

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 2)
		return (0);
	if (nb == 3)
		return (0);
	if (nb == 4)
		return (2);
	i = 2;
	while (i <= nb / 4 && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
