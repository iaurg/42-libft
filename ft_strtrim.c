/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 09:03:46 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/29 08:56:49 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_len;
	size_t	start;
	size_t	end;

	if(!s1 || !set)
		return (NULL);
	if(!*s1 || !*set)
		return (ft_strdup(s1));
	str_len = ft_strlen(s1) + 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = str_len;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, (end - start)));
}
/*
int main(void)
{
	printf("3 - %s",ft_strtrim("tripouille   xxx", " x"));
	printf("\n");
	printf("5 - %s",ft_strtrim("   xxxtripouille   xxx", " x"));
	printf("\n");
	printf("11 - %s",ft_strtrim("123", ""));
	printf("\n");
	printf("%s",ft_strtrim("e111xcole2ee1", "c"));
	printf("\n");
	printf("%s",ft_strtrim("e111xcole2ee1", "e1"));
	printf("\n");
	printf("%s",ft_strtrim("111xcole2ee1", "1"));
	printf("\n");
	printf("%s",ft_strtrim("e111xcole2ee1", "e"));
	printf("\n");
	return 0;
}
*/
/*
string = "c eu sei o que acontece"

Parameters
#1. The string to be trimmed.
#2. The reference set of characters to trim.

Return value The trimmed string. NULL if the allocation fails.
External functs. malloc

Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string
*/
