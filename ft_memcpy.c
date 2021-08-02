/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:37:19 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/01 20:53:56 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  memcpy() function copies n bytes from memory area src to memory area dst.
The memory areas must not overlap.  Use memmove(3) if the memory areas do over‐
lap.

(unsigned char *) to avoid const declaration
unsigned char *memory_src; redeclare memory to get memory value
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*memory_src;
	unsigned char	*memory_dst;
	unsigned int	counter;

	if (src == NULL && dst == NULL)
		return (dst);
	memory_src = (unsigned char *)src;
	memory_dst = (unsigned char *)dst;
	counter = 0;
	while (len > counter)
	{
		memory_dst[counter] = memory_src[counter];
		counter++;
	}
	return (dst);
}
