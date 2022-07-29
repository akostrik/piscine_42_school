/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 23:20:44 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/20 16:32:37 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# include <unistd.h>
# define FT_BOOLEAN_H
# define FALSE 0
# define SUCCESS 0
# define TRUE 1
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0) ? (TRUE) : (FALSE)

typedef int	t_bool;
#endif