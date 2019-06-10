/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 13:17:02 by jinhong           #+#    #+#             */
/*   Updated: 2019/06/10 15:53:25 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10000
# include <unistd.h>
# include <limits.h>

int					get_next_line(const int fd, char **line);

typedef struct		s_file
{
	char		buff[BUFF_SIZE + 1];
	int			let;
	char		*temp;
	int			index;
}					t_file;

#endif
