/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:22:43 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 20:57:21 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function ft_lstmap() iterates a list lst and applies the function f to
** each link to create a “fresh” list (using malloc(3)) resulting from the
** successive applications of f. If the allocation fails, the function returns
** NULL.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *lastnode;
	t_list *currentnode;

	if (lst && f)
	{
		head = f(lst);
		if (!head)
			return (NULL);
		lst = lst->next;
		lastnode = head;
		while (lst)
		{
			currentnode = f(lst);
			if (!currentnode)
				return (NULL);
			lastnode->next = currentnode;
			lastnode = currentnode;
			lst = lst->next;
		}
		return (head);
	}
	return (NULL);
}
