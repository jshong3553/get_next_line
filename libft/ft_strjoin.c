/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:49:11 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/11 14:35:29 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (new == NULL)
		return (NULL);
	ft_strcpy(new, (char *)s1);
	ft_strcat(new, s2);
	return (new);
}
