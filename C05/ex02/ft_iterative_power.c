/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:45:28 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/15 12:45:32 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	to_return;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	to_return = 1;
	while (i < power)
	{
		to_return = to_return * nb;
		i++;
	}
	return (to_return);
}
