/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 01:32:55 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 10:49:38 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "include.h"

void	puterr_with_errno(char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		write(2, c, 1);
		c++;
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
	{
		puterr_with_errno("File name missing.\n");
		return (-1);
	}
	if (argc > 2)
	{	
		puterr_with_errno("Too many arguments.\n");
		return (-1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		puterr_with_errno("Cannot read file.\n");
		return (-1);
	}
	ft_display_file(fd);
	close(fd);
	return (0);
}
