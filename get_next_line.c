/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 13:16:55 by jinhong           #+#    #+#             */
/*   Updated: 2019/06/10 12:43:13 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

int		copy(int fd, char **line, char **s, int index)
{
	char		*temp;

	if (s[fd][index] == '\0')
	{
		*line = ft_strdup(s[fd]);
		if (s && s[fd])
		{
			free(s[fd]);
			s[fd] = NULL;
		}
	}
	else if (s[fd][index] == '\n')
	{
		*line = ft_strsub(s[fd], 0, index);
		temp = ft_strdup(&s[fd][index + 1]);
		free(s[fd]);
		s[fd] = temp;
		if (s[fd][0] == '\0')
			if (s && s[fd])
			{
				free(s[fd]);
				s[fd] = NULL;
			}
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*s[OPEN_MAX];
	t_file		var_list;

	if (fd < 0 || line == NULL || fd > OPEN_MAX)
		return (-1);
	while ((var_list.let = read(fd, var_list.buff, BUFF_SIZE)) > 0)
	{
		if (s[fd] == NULL)
			s[fd] = ft_strnew(1);
		var_list.buff[var_list.let] = '\0';
		var_list.temp = ft_strjoin(s[fd], var_list.buff);
		free(s[fd]);
		s[fd] = var_list.temp;
		if (ft_strchr(var_list.buff, '\n'))
			break ;
	}
	if (var_list.let == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	else if (var_list.let < 0)
		return (-1);
	var_list.index = 0;
	while (s[fd][var_list.index] != '\n' && s[fd][var_list.index] != '\0')
		var_list.index++;
	return (copy(fd, line, s, var_list.index));
}
