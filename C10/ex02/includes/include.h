/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:34:31 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 10:45:53 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

void	puterr_with_errno(char *filename);
void	puterr(char *str);
void	puterr_invalid_nb_bytes(char *str);
void	puterr_option_requires_argument(void);
void	puterr_cannot_open(char *filename);
int		atoi_option(char *str, long *n);
void	delete_two_arguments(int *argc, char **argv, int i);
char	*ft_tail_one_file(int fd, long option);
void	put_stdin(char *stdin, int i, int argc);
int		put_file(char *filename, long option, int argc, int i);
#endif