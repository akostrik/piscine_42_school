/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:59:53 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/11 18:59:57 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		run_rough_and_seek_unordered_paires(int *tab, int size);
void	change_places(int *tab, int i, int j);

void	ft_sort_int_tab(int *tab, int size)
{
	while (run_rough_and_seek_unordered_paires(tab, size) != 0)
		;
}

int	run_rough_and_seek_unordered_paires(int *tab, int size)
{
	int	found;
	int	i;

	found = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			change_places(tab, i, i + 1);
			found = 1;
		}
		i++;
	}
	return (found);
}

void	change_places(int *tab, int i, int j)
{
	int		tmp;

	tmp = tab[i];
	tab[i] = tab[j];
	tab[j] = tmp;
}
