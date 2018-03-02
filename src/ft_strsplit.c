/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:36:03 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:28:37 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_skipdelimeters() function skips over delimiting characters
*/

static	void	ft_skipdelimeters(char **s, char c)
{
	while (**s == c)
	{
		*s = *s + 1;
	}
}

/*
** The ft_strsplit() function allocates with malloc(3) and returns an array of
** fresh strings (all ending with '\0' including the array itself) obtained by
** splitting s using the character c as a delimiter. If the allocation fails,
** the function returns NULL.
*/

char			**ft_strsplit(char const *s, char c)
{
	int		num_words;
	char	**arr_words;
	char	*str_copy;
	int		i;

	if (s)
	{
		num_words = ft_countwords(s, c);
		if ((arr_words = (char **)malloc(sizeof(char *) * (num_words + 1))))
		{
			if ((str_copy = ft_strdup(s)))
			{
				i = 0;
				while (i < num_words)
				{
					ft_skipdelimeters(&str_copy, c);
					if ((arr_words[i++] = ft_getword(str_copy, c)))
						ft_gotonextword(&str_copy, c);
				}
				arr_words[i] = NULL;
				return (arr_words);
			}
		}
	}
	return (NULL);
}
