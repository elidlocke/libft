/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:11:33 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:44:06 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_iswhitespace() checks whether or not a character is considered a
** whitespace character, aka ' ', '\t', '\n', '\f', '\v' or '\r'
*/

int		ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\r')
	{
		return (1);
	}
	return (0);
}
