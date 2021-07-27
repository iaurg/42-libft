#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring_ptr;
	size_t	counter;
	size_t	s_len;

	counter = 0;
	s_len = (unsigned int) ft_strlen(s);
	// start 100 len 1
	if (len > s_len)
		len = s_len;
	substring_ptr = ft_calloc(sizeof(char), len + 1);
	if (!s || !substring_ptr)
		return (NULL);
	if (start > s_len)
		return (substring_ptr);
	ft_strlcpy(substring_ptr, &s[start], len + 1);
	//ft_memcpy(substring_ptr, &s[start], len + 1);
	/*
	while (len-- && s[counter])
		substring_ptr[counter++] = s[start++];
	*/
	// substring_ptr[len] = '\0';
	return (substring_ptr);
}

/*----------------------------------------------------------------
s = "Hello" -- 4
start = 6
len = 4
result="llo W"

str = "lorem ipsum dolor sit amet";
ft_substr(str, 0, 10)
lorem ipsum
lorem ipsu
*/

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
