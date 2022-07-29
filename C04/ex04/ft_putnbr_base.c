/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:56:56 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/15 00:03:09 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int		base_is_correct(char *base);
void	put_zero_base(char *base);
int		convert_to_int(char c, char *base);
int		calculate_size_base(char *base);
void	invert_and_put_string(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;
	char	str[33];
	int		i;
	char	minus;

	if (nbr == 0)
		write(1, &base[0], 1);
	if (nbr == 0 || base_is_correct(base) == 0)
		return ;
	minus = '-';
	if (nbr < 0)
		write(1, &minus, 1);
	size_base = calculate_size_base(base);
	i = 0;
	while (nbr != 0)
	{
		if (nbr >= 0)
			str[i] = base[nbr % size_base];
		else
			str[i] = base[-(nbr % size_base)];
		nbr = nbr / size_base;
		i++;
	}
	str[i] = '\0';
	invert_and_put_string(str);
}

void	invert_and_put_string(char *str)
{
	char	tmp;
	int		i;
	int		size;

	i = 0;
	while (str[i] != '\0')
		i++;
	size = i;
	i = 0;
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	base_is_correct(char *base)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	size = i;
	if (size <= 1)
		return (0);
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
			if (base[i] == base[j++])
				return (0);
		i++;
	}
	return (1);
}

int	convert_to_int(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	calculate_size_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}
