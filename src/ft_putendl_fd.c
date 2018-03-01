/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 10:03:05 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:35:51 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_putendl_fd() function outputs a string to the output specified by
** the file descriptor, followed by a newline. The file descriptor  can be  0,
** 1, or 2, to refer to standard input, standard output, or standard error,
** respectively.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
		ft_putchar_fd('\n', fd);
	}
}
