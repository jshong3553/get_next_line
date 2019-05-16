/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:59:34 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/13 10:56:02 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int		length;

	length = 0;
	if (n < 0)
	{
		n = n * -1;
		length++;
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char		*ft_itoa(int n)
{
	char	*new;
	int		number;
	int		i;

	number = n;
	i = ft_length(number);
	if (!(new = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	new[i--] = '\0';
	if (number == 0)
		return (ft_strdup("0"));
	if (number < 0)
	{
		new[0] = '-';
		number = number * -1;
	}
	while (number > 0)
	{
		new[i] = 48 + (number % 10);
		number = number / 10;
		i--;
	}
	if (number == -2147483648)
		return (ft_strdup("-2147483648"));
	return (new);
}
