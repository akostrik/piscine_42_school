/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:35:17 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 10:44:58 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>
#include <string.h>
#include "ft.h"
#include "include.h"

void	puterr_with_errno(char *filename)
{
	write(2, "ft_tail: ", 9);
	if (filename == NULL)
	{
		write(2, "\n", 1);
		return ;
	}
	if (ft_strlen(filename) > 0)
		write(2, filename, ft_strlen(filename));
	else
		write(2, "''", 2);
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
	return ;
}

void	puterr(char *str)
{
	write(2, str, ft_strlen(str));
}

void	puterr_invalid_nb_bytes(char *str)
{
	puterr("ft_tail: invalid number of bytes: '");
	puterr(str);
	puterr("'\n");
}

void	puterr_option_requires_argument(void)
{
	puterr("ft_tail: option requires an argument -- 'c'\n");
	puterr("Try 'ft_tail --help' for more information.\n");
}

void	puterr_cannot_open(char *filename)
{
	puterr("ft_tail: cannot open '");
	puterr(filename);
	puterr("' for reading: No such file or directory\n");
}
