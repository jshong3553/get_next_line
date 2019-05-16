/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 19:40:49 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/07 10:15:29 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (s == NULL)
		return (NULL);
	j = ft_strlen(s);
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[j - 1] == '\t')
		j--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\n' || s[i] == '\t')
		j--;
	if (j <= 0)
		j = 0;
	str = (char*)malloc(sizeof(char) * (j + 1));
	s = s + i;
	i = -1;
	if (str == NULL)
		return (NULL);
	while (++i < j)
		str[i] = *s++;
	str[i] = '\0';
	return (str);
}
