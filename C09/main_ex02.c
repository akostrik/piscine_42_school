/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:56:10 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/27 19:14:53 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char	**tab;
	int		i;
	char	*str;
	char	*charset;

	str = "__ab.ab__\0__.?abc!";
	charset = "._!?";
	tab = ft_split(str, charset);
	i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	if (tab[i] == 0)
		printf("END TABLE\n");
}
