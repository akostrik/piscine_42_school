/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:23:58 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/26 12:11:49 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_file(int fd)
{
	char	buf[1024];
	int		nb_bytes;

	while (1)
	{
		nb_bytes = read(fd, &buf, 1024);
		if (nb_bytes <= 0)
			break ;
		write(1, buf, nb_bytes);
	}
}
