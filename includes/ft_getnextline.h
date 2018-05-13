/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnextline.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/13 10:53:07 by enennige          #+#    #+#             */
/*   Updated: 2018/05/13 11:37:18 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft.h"
# define BUFF_SIZE 42
# define MAX_FD 4864

int					read_file(int fd, char **file);
typedef	struct		s_file
{
	char			*head;
	char			*reader;
}					t_file;

#endif
