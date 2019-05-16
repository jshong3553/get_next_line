/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:04:35 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 16:55:28 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (!s || !(s2 = ft_memalloc(len + 1)))
		return (NULL);
	s2 = ft_strncpy(s2, (char*)s + start, len);
	return (s2);
}
