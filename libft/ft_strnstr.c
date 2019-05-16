/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 18:22:10 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/11 13:21:43 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (nee[i] == '\0')
		return ((char *)hay);
	while (i < len && hay[i])
	{
		j = 0;
		while (nee[j])
		{
			if (i + j >= len || hay[i + j] != nee[j])
				break ;
			j++;
		}
		if (nee[j] == '\0')
			return ((char *)(hay + i));
		i++;
	}
	return (0);
}
