/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 09:04:15 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/02 09:50:50 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_holder;
	t_list	*element;

	if (!*lst)
		return ;
	element = *lst;
	while (element)
	{
		lst_holder = element->next;
		ft_lstdelone(element, del);
		element = lst_holder;
	}
	*lst = NULL;
}

/*
#1. The adress of a pointer to an element.
#2. The adress of the function used to delete the
content of the element.

Return value None
External functs. free

Description
Deletes and frees the given element and every
successor of that element, using the function ’del’
and free(3).

Finally, the pointer to the list must be set to
NULL.
*/
