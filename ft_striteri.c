/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 08:22:37 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/01 13:26:40 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	counter;

	if (s && f)
	{
		counter = 0;
		while (s[counter])
		{
			f(counter, &s[counter]);
			counter++;
		}
	}
}

/*
Parameters
#1. The string on which to iterate.
#2. The function to apply to each character.

Return value None.
External functs. None

Description
Applies the function f to each character of the
string passed as argument, and passing its index
as first argument. Each character is passed by
address to f to be modified if necessary
*/
