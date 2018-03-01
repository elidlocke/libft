/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:46:44 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:30:12 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_putchar() function outputs the character c to the standard output.
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
