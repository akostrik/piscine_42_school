/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:46:19 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/18 10:57:03 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

= Test 1 ===================================================
.:
total 24
-rwxr-xr-x 1 deepthought root 20912 Jul 15 19:17 5hxpq06cm1ibs678nffm7t8m


$> ./5hxpq06cm1ibs678nffm7t8m
Command './5hxpq06cm1ibs678nffm7t8m' timed out after 10 seconds
*/

// 46340 * 46340 = 2 147 395 600
// INT_MAX         2 147 483 647 = 2^31- 1 primaire
// 46431 * 46341 = 2 147 488 281

int	ft_is_prime2(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i <= nb / 2 && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (!ft_is_prime2(i))
		i++;
	return (i);
}
