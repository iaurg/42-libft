/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:59:58 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/29 22:24:41 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*str_cpy;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	counter = 0;
	s_len = ft_strlen(s) + 1;
	str_cpy = (char *) malloc(sizeof(char) * s_len);
	if (!str_cpy)
		return (NULL);
	while (s[counter])
	{
		str_cpy[counter] = f(counter, s[counter]);
		counter++;
	}
	str_cpy[counter] = '\0';
	return (str_cpy);
}

/*
#1. The string on which to iterate.
#2. The function to apply to each character.

Return value
The string created from the successive applications
of ’f’. Returns NULL if the allocation fails.

External functs. malloc

Applies the function ’f’ to each character of the
string ’s’ to create a new string (with malloc(3))
resulting from successive applications of ’f’.
*/
