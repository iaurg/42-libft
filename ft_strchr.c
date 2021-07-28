/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:37:33 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/28 07:37:34 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find_c;

	find_c = c;
	while (*s != find_c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*
The strchr() function locates the first occurrence	of c (converted	to a
char) in the string pointed to by s.  The terminating null	character is
considered	part of	the string; therefore if c is `\0', the	functions lo-
cate the terminating `\0'.

The functions strchr() and	strrchr() return a pointer to the located
character,	or NULL	if the character does not appear in the	string.
*/
