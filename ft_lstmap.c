/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 22:17:38 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/03 22:20:02 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_element;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if (!new_element)
			ft_lstclear(&new_element, (*del));
		else
			ft_lstadd_back(&new_lst, new_element);
		lst = lst->next;
	}
	return (new_lst);
}

/*
	DESCRIPTION
	Iterates the list ’lst’ and applies the function ’f’ to the content of each
	element. Creates a new list resulting of the successive applications of the
	function ’f’. The ’del’ function is used to delete the content of an element
	if needed.

	PARAMETERS
	#1. The adress of a pointer to an element.
	#2. The adress of the function used to iterate on the list.
	#3. The adress of the function used to delete the content of an element if
	needed.

	RETURN VALUES
	The new list. NULL if the allocation fails.
*/
