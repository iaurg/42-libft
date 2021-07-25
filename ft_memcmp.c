#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	const char	*convert_b1;
	const char	*convert_b2;

	convert_b1 = (const char *)b1;
	convert_b2 = (const char *)b2;
	if (len == 0)
		return (0);
	return (ft_strncmp (convert_b1, convert_b2, len));
}

/*
DESCRIPTION
The memcmp() function compares byte string	b1 against byte	string b2.
Both strings are assumed to be len	bytes long.

RETURN VALUES
The memcmp() function returns zero	if the two strings are identical, oth-
erwise returns the	difference between the first two differing bytes
(treated as unsigned char values, so that `\200' is greater than `\0',
for example).  Zero-length	strings	are always identical.
*/
