/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:33:03 by iaurg             #+#    #+#             */
/*   Updated: 2021/08/01 22:14:28 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	ft_size(size_t str_len, size_t start, size_t max_len)
{
	unsigned int	holder;

	if (start < str_len)
	{
		holder = str_len - start;
	}
	if (start >= str_len)
	{
		holder = 0;
	}
	if (holder > max_len)
	{
		holder = max_len;
	}
	return (holder);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring_ptr;
	unsigned int	new_max_len;
	size_t			str_len;

	if (!s)
		return (NULL);
	str_len = (unsigned int) ft_strlen(s);
	new_max_len = ft_size(str_len, start, len);
	if (new_max_len == 0)
		return (ft_strdup(""));
	substring_ptr = ft_calloc(new_max_len + 1, sizeof(char));
	if (!substring_ptr)
		return (NULL);
	ft_strlcpy (substring_ptr, &s[start], new_max_len + 1);
	return (substring_ptr);
}

/*
Parameters
#1. The string from which to create the substring.
#2. The start index of the substring in the string’s’.
#3. The maximum length of the substring.

Return value The substring. NULL if the allocation fails.
External functs. malloc

Description Allocates
(with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
