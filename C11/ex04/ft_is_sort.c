/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:14:57 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 16:53:11 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted_incr;
	int	sorted_decr;

	i = 0;
	sorted_incr = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			sorted_incr = 0;
		i++;
	}
	i = 0;
	sorted_decr = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			sorted_decr = 0;
		i++;
	}
	if (sorted_incr == 1 || sorted_decr == 1)
		return (1);
	return (0);
}
