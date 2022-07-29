/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_rev_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:14:19 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/19 10:16:41 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	c = '\n';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
		ft_putstr(argv[i--]);
	return (0);
}
