/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 10:10:18 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 11:30:29 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*destp;
	unsigned char	*srcp;

	destp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destp[i] = srcp[i];
		if (destp[i] == (unsigned char)c)
			return ((void*)dest + i + 1);
		++i;
	}
	return (NULL);
}
