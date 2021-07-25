#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	find_c;
	int		s_len;
	char	*found_c;

	find_c = c;
	found_c = NULL;
	s_len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + s_len);
	while (*s)
	{
		if (*s == find_c)
			found_c = (char *) s;
		s++;
	}
	return ((char *)found_c);
}

/*
The strrchr() function is identical to strchr() except it locates the
last occurrence of	c.
*/
