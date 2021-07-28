/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 07:36:55 by itaureli          #+#    #+#             */
/*   Updated: 2021/07/28 07:36:55 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	to_n(char c)
{
	return (c - '0');
}

int	ft_atoi(const	char *nptr)
{
	int				final_number;
	int				negative_signal;

	final_number = 0;
	negative_signal = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			negative_signal++;
		nptr++;
	}
	while (ft_isdigit(*nptr))
		final_number = (final_number * 10) + to_n(*nptr++);
	if (negative_signal % 2 != 0)
		return (final_number * -1);
	return (final_number);
}
