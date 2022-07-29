/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:45:00 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/15 12:45:03 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	to_return;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = nb;
	to_return = 1;
	while (n > 0)
	{
		to_return = to_return * n;
		n--;
	}
	return (to_return);
}
