/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 10:16:12 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 09:41:04 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_striter() function applies the function f to each character of the
** string passed as argument. Each character is passed by address to f to be
** modified if necessary.
*/

void	ft_striter(char *s, void (*f) (char *))
{
	int i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}