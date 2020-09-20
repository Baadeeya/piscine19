/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:55:58 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/20 11:03:47 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Genere une string en char (pas int car prends moins de place)
** et lui alloue de la memoire.
*/

char	*ft_gen_char_ar(int i)
{
	char	*arr;

	if (!(arr = malloc(sizeof(char) * i)))
		return (NULL);
	return (arr);
}

/*
** Genere un tableau en pointant sur des adresses contenant elles-memes
** des strings et leur alloue de la memoire.
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
