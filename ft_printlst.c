/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 10:35:19 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 20:18:36 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_printlst() takes a linked list and prints the parameter
** content from each link in the list, assuming that the content is a string.
** Each parameter is followed by a newline.
*/

void	ft_printlst(t_list *list)
{
	while (list)
	{
		ft_putstr((char *)(list->content));
		ft_putchar('\n');
		list = list->next;
	}
}
