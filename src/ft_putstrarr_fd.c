/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrarr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 13:16:44 by enennige          #+#    #+#             */
/*   Updated: 2018/03/09 15:24:34 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_putstrarr_fd() takes in an array of strings and prints each
** string, followed by a newline to the specififed file descriptor.
*/

void	ft_putstrarr_fd(char **strarr, int fd)
{
	size_t i;

	if (strarr)
	{
		i = 0;
		while (strarr[i] != NULL)
		{
			ft_putstr_fd(strarr[i], fd);
			ft_putchar_fd('\n', fd);
			i++;
		}
	}
}
