/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:37:27 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/28 07:37:27 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*memory_src;
	unsigned char	*memory_dst;
	size_t			counter;

	memory_src = (unsigned char *)src;
	memory_dst = (unsigned char *)dst;
	counter = len;
	if (memory_src < memory_dst)
	{
		while (counter)
		{
			counter--;
			memory_dst[counter] = memory_src[counter];
		}
		return (dst);
	}
	ft_memcpy(memory_dst, memory_src, len);
	return (dst);
}
