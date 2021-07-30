/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 08:45:47 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/30 11:49:19 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_c(int c)
{
	return (c + '0');
}

static	int count_elements(int n)
{
	int counter;
	counter = 1;
	while (n / 10)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*final_string;
	int		counter;
	int		is_negative;

	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	counter = count_elements(n) + is_negative;
	final_string = (char *) malloc(sizeof(char) * (counter + 1));
	if(!final_string)
		return (NULL);
	if(n == -2147483648)
	{
		final_string = "-2147483648";
		return (final_string);
	}
	final_string[counter] = '\0';
	if(n == 0)
		final_string[0] = '0';
	if (is_negative)
		final_string[0] = '-';
	while (counter-- > is_negative)
	{
		final_string[counter] = to_c(n % 10);
		n = n / 10;
	}
	return (final_string);
}
/*
int main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-666));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
	return(0);
}
*/
/*
Parameters
#1. the integer to convert.

Return value The string representing the integer. NULL if the
allocation fails.

External functs. malloc

Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

*/
