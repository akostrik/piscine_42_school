/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:33:55 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 10:57:39 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include "include.h"
#include "ft.h"

// n * 1024 * 1024 * 1024 * 2014 * 1024 * 1024 * 1024 * 1024) > INT_MAX ?
// ' != ’

void	put_filename(char *filename)
{
	if (filename != NULL)
	{
		write(1, "==> ", 4);
		write(1, filename, ft_strlen(filename));
		write(1, " <==\n", 5);
	}
}

void	put_stdin(char *stdin, int i, int argc)
{
	put_filename("standard input");
	ft_putstr(stdin);
	if (i + 1 != argc)
		write(1, "\n", 1);
}

int	put_file(char *filename, long option, int argc, int i)
{
	int		fd;
	char	*str;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		puterr_cannot_open(filename);
		return (-1);
	}
	if (argc != 2)
		put_filename(filename);
	str = ft_tail_one_file(fd, option);
	if (str == NULL)
		return (-1);
	ft_putstr(str);
	if (fd != 0)
		close(fd);
	if (i + 1 != argc)
		write(1, "\n", 1);
	return (0);
}

void	delete_two_arguments(int *argc, char **argv, int i)
{
	int	j;

	j = i;
	while (j + 2 < *argc)
	{
		argv[j] = argv[j + 2];
		j++;
	}
	*argc -= 2;
}
