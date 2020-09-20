/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:55:58 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/20 14:03:54 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Generates a char string (not in because it takes more memory)
** and allocates the needed memory.
*/

char	*ft_gen_char_ar(int i)
{
	char	*arr;

	if (!(arr = malloc(sizeof(char) * i)))
		return (NULL);
	return (arr);
}

/*
** Generates an array by pointing on the adresses that point
** to strings to, and allocates the needed memory.
*/

char	**ft_gen_char_double_ar(int x, int y)
{
	char	**tab;
	int		i;

	if (!(tqb = malloc(sizeof(char*) * x)))
		return (NULL);
	i = -1;
	while (++i < x)
		if (!(tab[i] = ft_gen_char_ar(y)))
			return (NULL);
	return (tab);
}
