/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:15:03 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 15:16:05 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (c == str[index])
			return ((char*)&(str[index]));
		index++;
	}
	if (c == str[index])
		return ((char*)&(str[index]));
	return (NULL);
}
