/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 11:22:36 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/04 16:49:47 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		index;
	int		length;
	char	*str;

	length = 0;
	while (src[length])
		length++;
	str = (char*)malloc(sizeof(*str) * (length + 1));
	index = 0;
	if (str == NULL)
		return (NULL);
	while (index < length)
	{
		str[index] = src[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
