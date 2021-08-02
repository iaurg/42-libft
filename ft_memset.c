/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:37:30 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/01 20:51:28 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The  memset() function fills the first n bytes of the memory area pointed to by
	s with the constant byte c.

	We use this function before a operation, is like a memory "reset"
*/

// var memory  Receive the pointer and allow changes on it to move on
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned int	counter;
	unsigned char	*memory;

	counter = 0;
	memory = dest;
	while (len > counter)
	{
		memory[counter] = c;
		counter++;
	}
	return (memory);
}
