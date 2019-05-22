/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 13:16:55 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/20 19:06:41 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		copy(int fd, char **line, char **s, int i)
{
	char	*temp;

	if (s[fd][i] == '\0')
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	else if (s[fd][i] == '\n')
	{
		*line = ft_strsub(s[fd], 0, i);
		temp = ft_strdup(&s[fd][i + 1]);
		free(s[fd]);
		s[fd] = temp;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	return (1);
}

int		check_line(int fd, char **line, char **s)
{
	int		i;

	i = 0;
	while (s[fd][i] != '\n' && s[fd][i] != '\0')
		i++;
	copy(fd, line, s, i);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*s[255];
	char			buff[BUFF_SIZE + 1];
	char			*temp;
	int				r;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((r = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[r] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		temp = ft_strjoin(s[fd], buff);
		free(s[fd]);
		s[fd] = temp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (r == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	if (r < 0)
		return (-1);
	check_line(fd, line, s);
	return (1);
}
