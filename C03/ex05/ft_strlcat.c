/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:29:34 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/18 13:59:35 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Appends the NUL-terminated src to the end of dst,
Appends at most size - strlen(dst) - 1 bytes
Add \0 if size > 0 and there is at least 1 byte free in dst
If traverses size characters without finding a NUL ->
  string length = size, dest not NUL-terminated (no space for \0)
_________________________________
ARG buffer fullsize (not just the length), byte for \0 included in size
src and dst NUL-terminated
RET length of string it tried to create = dst_init_len + length src, 
does not include NUL
Safer, more consistent, less error prone replacements for strncat(3)
*/

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	nb_chars_to_treat;
	unsigned int	init_d_len;

	d = dest;
	s = src;
	nb_chars_to_treat = size;
	while (nb_chars_to_treat-- != 0 && *d != '\0')
		d++;
	init_d_len = d - dest;
	nb_chars_to_treat = size - init_d_len;
	if (nb_chars_to_treat == 0)
		return (init_d_len + ft_strlen(s));
	while (*s != '\0')
	{
		if (nb_chars_to_treat != 1)
		{
			*d++ = *s;
			nb_chars_to_treat--;
		}
		s++;
	}
	*d = '\0';
	return (init_d_len + (s - src));
}
