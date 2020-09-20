/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 18:40:56 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/20 18:45:55 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_range(int min, int max)
{
	int i;
	int *temp;

	if (min >= max)
		return (NULL);
	max -= min;
	temp = malloc(max * sizeof(int));
	if (!temp)
		return (NULL);
	i = -1;
	while (++i < max)
		temp[i] = min + i;
	return (temp);
}
