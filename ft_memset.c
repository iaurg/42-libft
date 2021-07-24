/*
	The  memset() function fills the first n bytes of the memory area pointed to by
	s with the constant byte c.

	We use this function before a operation, is like a memory "reset"
*/

// var memory  Receive the pointer and allow changes on it to move on
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	counter;
	unsigned char	*memory;

	counter = 0;
	memory = b;
	while (len > counter)
	{
		memory[counter] = c;
		counter++;
	}
	return (memory);
}
