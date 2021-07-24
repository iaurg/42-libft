/*
	The  memset() function fills the first n bytes of the memory area pointed to by
	s with the constant byte c.

	We use this function before a operation, is like a memory "reset"
*/

// var memory  Receive the pointer and allow changes on it to move on
void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	counter;
	unsigned char	*memory;

	counter = 0;
	memory = s;
	while (n > counter)
	{
		memory[counter] = c;
		counter++;
	}
	return (memory);
}
