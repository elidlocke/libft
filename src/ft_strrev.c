/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 08:37:06 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:43:22 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes a string and the length of that string, and  reverses
** the string in place. Returns the reversed string.
*/

char	*ft_strrev(char *str, int len)
{
	char *pfront;
	char *pback;
	char swap;

	pfront = str;
	pback = str + (len - 1);
	while (pfront < pback)
	{
		swap = *pfront;
		*pfront = *pback;
		*pback = swap;
		pfront++;
		pback--;
	}
	return (str);
}
