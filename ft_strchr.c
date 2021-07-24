#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find_c;

	find_c = c;
	while (*s != find_c)
	{
		if (*s == '\0')
			return ('\0');
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
