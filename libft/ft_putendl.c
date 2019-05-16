/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:06:35 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/06 15:09:03 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int index;

	index = 0;
	if (s == NULL)
		return ;
	while (s[index])
	{
		ft_putchar(s[index]);
		index++;
	}
	ft_putchar('\n');
}
