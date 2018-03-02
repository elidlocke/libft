/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gotonextword.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:20:09 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 10:49:06 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_gotonextword() function takes a pointer to a string and moves the
** pointer forward to the next point that is past the next delimiter. if
** there is no more words in the string, the pointer is moved to the end
** of the string.
*/

void	ft_gotonextword(char **pstr, char delim)
{
	char	*str;
	int		inbetween_word;

	str = *pstr;
	inbetween_word = 0;
	while (*str)
	{
		if (*str == delim)
		{
			inbetween_word = 1;
		}
		else if (*str != delim && inbetween_word == 1)
		{
			return ;
		}
		*pstr = *pstr + 1;
		str++;
	}
}
