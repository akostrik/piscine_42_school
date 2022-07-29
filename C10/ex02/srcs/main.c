/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:19:55 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 10:58:20 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// open returns the new file descriptor, -1 if an error occurred, errno 
// close() returns zero on success.  On error, -1 is returned, errno
// strerror return string describing error number or an "Unknown error nnn"
// basename strip directory and suffix from filenames
// malloc, free
// errno

// with no FILE, or when FILE is -, read standard input

// -c NUM output the last NUM bytes

// buff size = option (long) ? 

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>
#include "ft.h"
#include "include.h"
#define ERROR_OPTION -1
#define NO_MORE_OPTIONS -2
#define OPTION_OK 0

int	calc_nb_stdin(int argc, char **argv)
{
	int	i;
	int	nb_stdout;

	i = 0;
	nb_stdout = 0;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "-") == 0)
			nb_stdout++;
		i++;
	}
	return (nb_stdout);
}

char	**read_stdins(int argc, char **argv, long option)
{
	int		nb_stdin;
	char	**stdins;
	int		i;
	char	*str;

	nb_stdin = calc_nb_stdin(argc, argv);
	stdins = (char **)malloc(nb_stdin * sizeof(char *));
	if (stdins == NULL)
		return (NULL);
	i = 0;
	while (i < nb_stdin)
	{
		str = ft_tail_one_file(0, option);
		if (str == NULL)
			continue ;
		stdins[i++] = str;
	}
	return (stdins);
}

int	get_next_option(int *argc, char **argv, long *option)
{
	int	i;

	i = 0;
	while (++i < *argc)
	{
		if (ft_strcmp(argv[i], "-c") == 0)
		{
			if (i + 1 >= *argc)
			{
				puterr_option_requires_argument();
				return (ERROR_OPTION);
			}
			if (atoi_option(argv[i + 1], option) < 0)
			{
				puterr_invalid_nb_bytes(argv[i + 1]);
				return (ERROR_OPTION);
			}
			delete_two_arguments(argc, argv, i);
			return (OPTION_OK);
		}
	}
	return (NO_MORE_OPTIONS);
}

// Tous les tests seront effectué avec -c
int	get_last_option(int *argc, char **argv, long *option)
{
	long	next_option;
	int		ret_next_option;

	*option = 0;
	while (1)
	{
		ret_next_option = get_next_option(argc, argv, &next_option);
		if (ret_next_option == OPTION_OK)
			*option = next_option;
		if (ret_next_option == NO_MORE_OPTIONS)
			return (OPTION_OK);
		if (ret_next_option == ERROR_OPTION)
			return (ERROR_OPTION);
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	long	option;
	char	**stdins;

	if (get_last_option(&argc, argv, &option) == ERROR_OPTION)
		return (-1);
	if (option == 0)
		return (0);
	stdins = read_stdins(argc, argv, option);
	if (stdins == NULL)
		return (-1);
	i = 0;
	j = 0;
	while (++i < argc && argv[i] != NULL)
	{
		if (ft_strcmp(argv[i], "-") == 0 || argc == 1)
			put_stdin(stdins[j++], i, argc);
		else
			put_file(argv[i], option, argc, i);
	}
	return (0);
}
