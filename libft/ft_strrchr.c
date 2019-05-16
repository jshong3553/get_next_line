/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:17:18 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/04 17:38:00 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int index;

	index = 0;
	while (str[index])
		index++;
	index++;
	while (index--)
	{
		if (c == str[index])
			return ((char*)(&str[index]));
	}
	return (NULL);
}
