/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaureli <itaureli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 08:58:18 by itaureli          #+#    #+#             */
/*   Updated: 2021/08/06 07:35:13 by itaureli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	set_array_size(const char *str, char delimiter)
{
	int	size;
	int	pos;

	size = 0;
	pos = 0;
	while (*str && *str == delimiter)
		str++;
	while (str[pos])
	{
		if (!pos)
			size++;
		else if (str[pos - 1] == delimiter && str[pos] != delimiter)
			size++;
		pos++;
	}
	return (size);
}

static size_t	word_position(char const *str, char delimiter)
{
	size_t	position;

	position = 0;
	while (str[position] && str[position] != delimiter)
		position++;
	return (position);
}

char	**ft_split(char const *s, char c)
{
	char		**final_array;
	size_t		limit;
	size_t		array_size;
	size_t		counter;

	if (!s)
		return (NULL);
	array_size = set_array_size(s, c);
	final_array = malloc(sizeof(char *) * (array_size + 1));
	if (!final_array)
		return (NULL);
	counter = 0;
	while (counter < array_size)
	{
		while (*s && *s == c)
			s++;
		limit = word_position(s, c);
		final_array[counter] = ft_substr(s, 0, limit);
		s += limit + 1;
		counter++;
	}
	final_array[array_size] = NULL;
	return (final_array);
}

/*
stringona = "---ecole - 42- programming - total---"
splita com "-"
splitted = ["ecole "," 42"," sucesso"," total"]

malloc, free

Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.
*/
