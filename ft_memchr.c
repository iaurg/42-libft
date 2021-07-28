/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:37:10 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/28 07:37:11 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*converted_b;

	converted_b = (unsigned char *) b;
	while (len--)
	{
		if (*converted_b == (unsigned char) c)
			return ((void *)converted_b);
		converted_b++;
	}
	return (NULL);
}

/*
The memchr() function locates the first occurrence	of c (converted	to an
unsigned char) in string b.

The memchr() and memrchr()	functions return a pointer to the byte lo-
cated, or NULL if no such byte exists within len bytes.
*/
