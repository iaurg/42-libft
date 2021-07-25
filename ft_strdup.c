#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(str) + 1;
	ptr = (char *) malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, str, size);
	return ((char *) ptr);
}

/*
The strdup() function allocates sufficient	memory for a copy of the
string str, does the copy,	and returns a pointer to it.  The pointer may
subsequently be used as an	argument to the	function free(3).

If	insufficient memory is available, NULL is returned and errno is	set to
ENOMEM.
*/
