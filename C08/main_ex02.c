/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:52:43 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/20 16:31:27 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("ABS(2) = %d\n", ABS(2));
	printf("ABS(-2) = %d\n", ABS(-2));
	printf("ABS(INT_MAX) = %d\n", ABS(INT_MAX));
	//printf("ABS(INT_MIN) = %d\n", ABS(INT_MIN));
	return (0);
}
