/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 11:14:20 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 11:30:18 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sp1;
	unsigned char	*sp2;

	i = 0;
	sp1 = (unsigned char *)s1;
	sp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*sp1 == *sp2 && ++i < n)
	{
		sp1++;
		sp2++;
	}
	return ((int)(*sp1 - *sp2));
}
