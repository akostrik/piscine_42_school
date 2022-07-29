/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_option.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 22:39:48 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 10:45:44 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	add_prefix1(char c, long *n)
{
	long	p;

	p = 1024;
	if (c == 'b')
		*n *= 512;
	else if (c == 'K')
		*n *= p;
	else if (c == 'M')
		*n *= p * p;
	else if (c == 'G')
		*n *= p * p * p;
	else if (c == 'T')
		*n *= p * p * p * p;
	else if (c == 'P')
		*n *= p * p * p * p * p;
	else if (c == 'E')
		*n *= p * p * p * p * p * p;
	else if (c == 'Z')
		*n *= p * p * p * p * p * p * p;
	else if (c == 'Y')
		*n *= p * p * p * p * p * p * p * p;
	else
		return (-1);
	return (0);
}

int	add_prefix2(char c1, char c2, long *n)
{
	long	p;

	p = 1000;
	if (c1 == 'k' && c2 == 'B')
		*n *= p;
	else if (c1 == 'M' && c2 == 'B')
		*n *= p * p;
	else if (c1 == 'G' && c2 == 'B')
		*n *= p * p * p;
	else if (c1 == 'T' && c2 == 'B')
		*n *= p * p * p * p;
	else if (c1 == 'P' && c2 == 'B')
		*n *= p * p * p * p * p;
	else if (c1 == 'E' && c2 == 'B')
		*n *= p * p * p * p * p * p;
	else if (c1 == 'Z' && c2 == 'B')
		*n *= p * p * p * p * p * p * p;
	else if (c1 == 'Y' && c2 == 'B')
		*n *= p * p * p * p * p * p * p * p;
	else
		return (-1);
	return (0);
}

int	atoi_option(char *str, long *n)
{
	int	i;

	i = 0;
	*n = 0;
	while (str[i] != '\0')
	{
		if (is_numeric(str[i]) == 1)
			*n = *n * 10 + str[i] - '0';
		else
			break ;
		i++;
	}
	if (str[i] == '\0')
		return (0);
	if (str[i] != '\0' && str[i + 1] == '\0')
		return (add_prefix1(str[i], n));
	if (str[i] != '\0' && str[i + 1] != '\0' && str[i + 2] == '\0')
		return (add_prefix2(str[i], str[i + 1], n));
	return (-1);
}
