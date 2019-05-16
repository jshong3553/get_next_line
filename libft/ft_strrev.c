/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:16:33 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/09 14:17:47 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		index;
	int		length;
	char	temp;

	length = 0;
	while (str[length])
		length++;
	length--;
	index = 0;
	while (index < length)
	{
		temp = str[length];
		str[length] = str[index];
		str[index] = temp;
		index++;
		length--;
	}
	return (str);
}
