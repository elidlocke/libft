/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnextline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 10:49:58 by enennige          #+#    #+#             */
/*   Updated: 2018/05/13 11:37:41 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_getnextline.h"
#include "libft.h"

/*
** the function strlen_until() gets the length of the string until the
** delimiting character c
*/

static int	strlen_until(char *line, char c)
{
	int i;

	i = 0;
	while (line[i] != c && line[i] != '\0')
		i++;
	return (i);
}

/*
** The function concat_buff() takes a string, a buffer input and the number
** of characters read, aka the buffer size, and adds the buffer to the string.
** If the string is full and a malloc to create it fails, the function does
** nothing.
*/

static void	concat_strings(char **str, char *buff, int ret)
{
	char *tmp;

	buff[ret] = '\0';
	if (!(*str))
		*str = (char *)malloc(sizeof(char) * 1);
	if (*str)
	{
		tmp = *str;
		*str = ft_strjoin(*str, buff);
		free(tmp);
	}
}

/*
** The function get_next_line() returns the next line from an open file.
** Returns 1, 0 or -1 depending on whether a line has been read, when the
** reading has been completed, or if an error has happened respectively.
*/

int			ft_getnextline(const int fd, char **line)
{
	static t_file	file[MAX_FD];
	int				len;
	int				ret;
	char			buffer_str[BUFF_SIZE + 1];

	if (read(fd, buffer_str, 0) < 0 || fd < 0 || fd > MAX_FD || line == NULL)
		return (-1);
	while ((ret = read(fd, buffer_str, BUFF_SIZE)))
	{
		concat_strings(&file[fd].head, buffer_str, ret);
		file[fd].reader = file[fd].head;
	}
	if (ret == -1)
		return (-1);
	len = strlen_until(file[fd].reader, '\n');
	if (!(*line = ft_strndup(file[fd].reader, len)))
		return (-1);
	if (*(file[fd].reader) == '\0')
	{
		free(file[fd].head);
		return (0);
	}
	file[fd].reader += len + 1;
	return (1);
}
