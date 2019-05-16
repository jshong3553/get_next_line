/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 09:58:03 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 10:08:11 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destp;
	unsigned char	*srcp;

	destp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	while (n-- > 0)
		*(destp++) = *(srcp++);
	return (dest);
}
