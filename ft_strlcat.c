/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:37:40 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/28 07:37:41 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcat() appends string src to the end of dst.  It will append
at most dstsize - strlen(dst) - 1 characters.
It will then NUL-terminate, unless dstsize is 0 or the
original dst string was longer than dstsize
(in practice this should not happen as it means
that either dstsize is incorrect or that dst is not a proper string).
If the src and dst strings overlap, the behavior is undefined.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	hold;
	size_t	str_len;

	str_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < dstsize && dst[dst_len])
		dst_len++;
	hold = dst_len;
	while (src[dst_len - hold] && (dst_len + 1) < dstsize)
	{
		dst[dst_len] = src[dst_len - hold];
		dst_len++;
	}
	if (hold < dstsize)
		dst[dst_len] = '\0';
	return (hold + str_len);
}
