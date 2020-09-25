/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:00:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/25 17:45:26 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		x;

	if (!(tab = (char**)malloc(sizeof(char*) * ft_wordcount(str + 1))))
		return (NULL);

	return (tab);
}
