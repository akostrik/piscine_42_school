/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:26:34 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/20 16:44:30 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compares the two strings
The locale is not taken into account
negatif s1 < s2
equal
positiv s1 > s2
s1 is to be less  than, to match, or be greater than s2.
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1 == 1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] == '\0')
			return (-1);
		if (s2[i] == '\0')
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
}
