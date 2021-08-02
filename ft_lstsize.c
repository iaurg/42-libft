/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 07:56:16 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/02 09:49:01 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_size;
	t_list	*lst_nav;

	lst_size = 0;
	lst_nav = lst;
	while (lst_nav)
	{
		lst_size++;
		lst_nav = lst_nav->next;
	}
	return (lst_size);
}
