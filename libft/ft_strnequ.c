/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:59:02 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/11 13:04:53 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (0);
	if (s1 && s2 && n)
	{
		while (s1[j] != '\0' && i < n)
		{
			if (s1[j] == s2[j])
			{
				j++;
				n--;
			}
			else
				return (0);
		}
	}
	return (1);
}
