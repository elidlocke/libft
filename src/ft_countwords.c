/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 13:46:41 by enennige          #+#    #+#             */
/*   Updated: 2018/02/27 16:35:57 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The function ft_countwords() takes a string and a delimeter and counts the
** number of words between the delimeters.
*/

int	ft_countwords(const char *str, char delim)
{
	int in_word;
	int num_words;
	int i;

	in_word = 0;
	num_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == delim)
		{
			i++;
			in_word = 0;
		}
		else
		{
			if (in_word == 0)
			{
				in_word = 1;
				num_words++;
			}
			i++;
		}
	}
	return (num_words);
}
