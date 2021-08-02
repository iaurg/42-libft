/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 08:08:25 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/02 09:48:10 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_position;
	t_list	*last_lst;

	if (lst == NULL)
		return (NULL);
	lst_position = lst;
	while (lst_position != NULL)
	{
		last_lst = lst_position;
		lst_position = lst_position -> next;
	}
	return (last_lst);
}
