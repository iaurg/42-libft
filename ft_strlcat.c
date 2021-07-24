#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{

	char			*memory_dst;
	char			*memory_src;
	size_t			counter;
	size_t			dst_len;

	memory_dst = (char *) dst;
	memory_src = (char *) src;
	dst_len = ft_strlen(memory_dst);
	counter = size;
	while (counter-- != 0 && memory_dst)
		memory_dst++;
	if (counter == 0)
		return (dst_len + ft_strlen(memory_src));

	while (counter-- > (size - (dst_len - 1)))
		*memory_dst++ = *memory_src++;
	*memory_dst = '\0';
	return (dst_len + ft_strlen(memory_src));
}
