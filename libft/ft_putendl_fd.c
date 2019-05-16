/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:09:08 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 15:12:28 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int index;

	index = 0;
	if (s == NULL)
		return ;
	while (s[index])
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
	ft_putchar_fd('\n', fd);
}
