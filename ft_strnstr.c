#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	char		*convert_big;
	char		*convert_little;
	size_t		little_len;

	convert_big = (char *)big;
	convert_little = (char *)little;
	if (!convert_little)
		return (convert_big);
	little_len = ft_strlen(convert_little);
	while (little_len <= len-- && convert_big)
	{
		if (!ft_strncmp(convert_big, convert_little, little_len))
			return (convert_big);
		convert_big++;
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
