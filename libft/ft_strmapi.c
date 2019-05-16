/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:09:59 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/08 16:13:03 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*new;
	unsigned int	index;

	index = 0;
	str = (char *)s;
	if (str && f)
	{
		if (!(new = ft_memalloc(ft_strlen(str) + 1)))
			return (NULL);
		while (str[index])
		{
			new[index] = (*f)(index, str[index]);
			index++;
		}
		new[index] = '\0';
		return (new);
	}
	return (NULL);
}
