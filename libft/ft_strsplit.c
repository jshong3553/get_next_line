/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 11:01:56 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/13 10:55:53 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s, char c)
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		i;
	int		j;
	int		k;

	if (!s || !(new = (char**)malloc(sizeof(*new) * (ft_count(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_count(s, c))
	{
		k = 0;
		if (!(new[i] = ft_strnew(ft_len(&s[j], c) + 1)))
			new[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			new[i][k++] = s[j++];
		new[i][k] = '\0';
		i++;
	}
	new[i] = 0;
	return (new);
}
