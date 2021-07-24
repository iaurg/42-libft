/*
The  memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.  Use memmove(3) if the memory areas do over‐
lap.

(unsigned char *) to avoid const declaration
unsigned char *memory_src; redeclare memory to get memory value
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*memory_src;
	unsigned char	*memory_dest;
	unsigned int	counter;

	if (src == NULL && dest == NULL)
		return (dest);
	memory_src = (unsigned char *)src;
	memory_dest = (unsigned char *)dest;
	counter = 0;
	while (n > counter)
	{
		memory_dest[counter] = memory_src[counter];
		counter++;
	}
	return (dest);
}
