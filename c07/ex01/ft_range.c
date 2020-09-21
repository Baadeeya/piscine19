/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:40:56 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/21 15:43:37 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *temp;

	i = -1;
	if (min >= max)
		return (NULL);
	max -= min;
	temp = malloc(max * sizeof(int));
	if (!temp)
		return (NULL);
	while (++i < max)
		temp[i] = min + i;
	return (temp);
}
