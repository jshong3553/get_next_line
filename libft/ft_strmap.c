/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 10:28:11 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/08 16:12:10 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	char			*new;
	unsigned int	index;

	str = (char *)s;
	if (str && f)
	{
		index = 0;
		if (!(new = ft_memalloc(ft_strlen(str) + 1)))
			return (NULL);
		while (str[index])
		{
			new[index] = (*f)(str[index]);
			index++;
		}
		new[index] = '\0';
		return (new);
	}
	return (NULL);
}
