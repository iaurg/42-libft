/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:50:41 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/02 09:50:00 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*
#1. The element to free.
#2. The address of the function used to delete the
content.

Return value None

External functs. free

Description Takes as a parameter an element and frees the
memory of the element’s content using the function
’del’ given as a parameter and free the element.

The memory of ’next’ must not be freed.
*/
