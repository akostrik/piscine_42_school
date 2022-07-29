/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:19:55 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 10:47:02 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// open returns the new file descriptor, -1 if on error, errno 
// close() returns zero on success.  On error -1, errno
// strerror return string describing error number or an "Unknown error nnn"
// basename strip directory and suffix from filenames

// Print the last 10 lines of each FILE to standard output
// With more than one FILE, precede each with a header giving the file name.

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
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

int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	if (argc == 1)
	{
		ft_display_file(0);
		return (0);
	}
	i = 0;
	while (++i < argc && argv[i] != NULL)
	{
		if (ft_strcmp(argv[i], "-") == 0)
			ft_display_file(0);
		else
		{
			fd = open(argv[i], O_RDONLY);
			if (fd < 0)
				puterr_with_errno(argv[i]);
			else
				ft_display_file(fd);
			if (fd != 0)
				close(fd);
		}
	}
	return (0);
}
