/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:36:47 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/28 07:36:47 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(number * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, number * size);
	return (ptr);
}

/*
The calloc function allocates space for number objects, each size bytes
in length. The result is identical to calling malloc with an argument
of number * size, with the exception that the allocated memory is
explicitly initialized to zero bytes.
*/
