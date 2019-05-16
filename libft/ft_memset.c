/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 09:48:17 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 09:55:18 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;

	if (len == 0)
		return (b);
	mem = (unsigned char *)b;
	while (len--)
	{
		*mem = (unsigned char)c;
		if (len)
			mem++;
	}
	return (b);
}
