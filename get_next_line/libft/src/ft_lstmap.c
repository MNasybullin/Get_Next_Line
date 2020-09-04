/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:47:38 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/19 15:28:49 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new = (*f)(lst);
	tmp = new;
	while (lst->next)
	{
		if (!(tmp->next = (*f)(lst)))
		{
			free(new);
			return (NULL);
		}
		lst = lst->next;
		tmp->next = (*f)(lst);
		tmp = tmp->next;
	}
	return (new);
}
