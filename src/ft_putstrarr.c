/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrarr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 13:09:59 by enennige          #+#    #+#             */
/*   Updated: 2018/03/09 15:24:49 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_putstrarr() takes in an array of strings and prints each
** string, followed by a newline.
*/

void	ft_putstrarr(char **strarr)
{
	size_t i;

	if (strarr)
	{
		i = 0;
		while (strarr[i] != NULL)
		{
			ft_putstr(strarr[i]);
			ft_putchar('\n');
			i++;
		}
	}
}
