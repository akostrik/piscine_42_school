/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:25:21 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/28 12:09:15 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		plus(int v1, int v2);
int		minus(int v1, int v2);
int		division(int v1, int v2);
int		mult(int v1, int v2);
int		modulo(int v1, int v2);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	calc_tab_func(int (**tab_func)(int, int));
#endif