/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 11:58:05 by jinhong           #+#    #+#             */
/*   Updated: 2019/05/13 10:57:58 by jinhong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*fresh;

	new = f(lst);
	fresh = new;
	if (!lst || !f)
		return (NULL);
	while (lst->next != NULL)
	{
		new->next = f(lst->next);
		new = new->next;
		lst = lst->next;
	}
	return (fresh);
}
