/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 10:03:30 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:31:25 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_putendl() function outputs a string to the standard output, followed
** by a newline.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar(*s);
			s++;
		}
		ft_putchar('\n');
	}
}
