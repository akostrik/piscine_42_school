/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:28:43 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/19 00:13:22 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares only the first (at most) n bytes of s1 and s2
// return int > 0 : s1 > s2
// return 0       : s1 == s2
// return int < 0 : s1 < s2

/* 
NON VALIDE
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (1 == 1)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		if (i >= n)
			return (0);
	}
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n-- > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
