#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*memory_src;
	unsigned char	*memory_dest;
	size_t			counter;

	memory_src = (unsigned char *)src;
	memory_dest = (unsigned char *)dest;
	counter = n;
	if (memory_src < memory_dest)
	{
		while (counter)
		{
			counter--;
			memory_dest[counter] = memory_src[counter];
		}
		return (dest);
	}
	ft_memcpy(memory_dest, memory_src, n);
	return (dest);
}
