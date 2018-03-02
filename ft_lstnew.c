/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 20:39:06 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 20:34:37 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a “fresh” link. The variables
** content and content_size of the new link are initialized by copy of the
** parameters of the function. If the parameter content is nul, the variable
** content is initialized to NULL and the variable content_size is initialized
** to 0 even if the parameter content_size isn’t. The variable next is
** initialized to NULL. If the allocation fails, the function returns NULL.
*/

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		if (!content)
		{
			node->content = NULL;
			node->content_size = 0;
		}
		else
		{
			if (!(node->content = malloc(content_size)))
			{
				free(node);
				return (NULL);
			}
			ft_memcpy(node->content, content, content_size);
			node->content_size = content_size;
		}
		node->next = NULL;
		return (node);
	}
	return (NULL);
}
