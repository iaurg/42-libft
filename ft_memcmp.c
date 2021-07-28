/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:37:15 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/28 07:37:15 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*convert_b1;
	unsigned char	*convert_b2;

	convert_b1 = (unsigned char *)b1;
	convert_b2 = (unsigned char *)b2;
	if (len == 0)
		return (0);
	while (len-- > 0)
	{
		if (*convert_b1 != *convert_b2)
			return ((int)(*convert_b1 - *convert_b2));
		convert_b1++;
		convert_b2++;
	}
	return (0);
}

/*
DESCRIPTION
The memcmp() function compares byte string	b1 against byte	string b2.
Both strings are assumed to be len	bytes long.

RETURN VALUES
The memcmp() function returns zero	if the two strings are identical, oth-
erwise returns the	difference between the first two differing bytes
(treated as unsigned char values, so that `\200' is greater than `\0',
for example).  Zero-length	strings	are always identical.

while (len--)
{
	if (convert_b1[len] != convert_b2[len])
		return (convert_b1[len] - convert_b2[len]);
}
return (0);
*/
