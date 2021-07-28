/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:37:56 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/28 07:37:56 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t		little_len;

	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	while (*big && little_len <= len--)
	{
		if (!ft_memcmp(big, little, little_len))
			return ((char *)big);
		big++;
	}
	return (NULL);
}

/*
The strnstr() function locates the	first occurrence of the	null-termi-nated
string little in the string big, where not more than len characters
are searched. Characters that appear after a `\0` character are not
searched.

RETURN VALUES
If little is an empty string, big is returned; if little occurs nowhere
in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.
*/
