/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 03:22:14 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 17:01:06 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "../includes/include.h"

int	operator(int v1, int v2, int (*f)(int, int))
{
	return (f(v1, v2));
}

void	calc_tab_func(int (**tab_func)(int, int))
{
	tab_func[0] = &plus;
	tab_func[1] = &minus;
	tab_func[2] = &division;
	tab_func[3] = &mult;
	tab_func[4] = &modulo;
}

int	main(int argc, char **argv)
{
	int		(*tab_func[5])(int, int);

	if (argc != 4)
		return (0);
	calc_tab_func(tab_func);
	if (ft_strlen(argv[2]) != 1)
		ft_putnbr(0);
	else if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : division by zero\n");
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
		ft_putstr("Stop : modulo by zero\n");
	else if (argv[2][0] == '+')
		ft_putnbr(operator(ft_atoi(argv[1]), ft_atoi(argv[3]), tab_func[0]));
	else if (argv[2][0] == '-')
		ft_putnbr(operator(ft_atoi(argv[1]), ft_atoi(argv[3]), tab_func[1]));
	else if (argv[2][0] == '/')
		ft_putnbr(operator(ft_atoi(argv[1]), ft_atoi(argv[3]), tab_func[2]));
	else if (argv[2][0] == '*')
		ft_putnbr(operator(ft_atoi(argv[1]), ft_atoi(argv[3]), tab_func[3]));
	else if (argv[2][0] == '%')
		ft_putnbr(operator(ft_atoi(argv[1]), ft_atoi(argv[3]), tab_func[4]));
	else
		ft_putnbr(0);
	return (0);
}
