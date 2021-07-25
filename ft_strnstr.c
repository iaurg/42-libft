#include "libft.h"
char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	char	*convert_big;
	char	*convert_little;

	convert_big = (char *)big;
	convert_little = (char *)little;

	if (len == 0)
		return (convert_big);
	// Busca apenas enquanto < len
	// strchr strncmp
	while (len--)
	{
		// while?
	}
	// se não houver little em nenhum local de big, return null

	// se encontrar o little dentro de big, retorna o ponteiro da primeira letra de little

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
