/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 10:26:06 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 10:36:29 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (src <= dest)
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	else
		ft_memcpy(dest, src, len);
	return ((void *)dest);
}
