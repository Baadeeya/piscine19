/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 18:09:25 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/24 16:04:40 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_bigfatstrlen(int size, char **strs, char *sep)
{
	int		x;
	int		y;
	int		m;

	x = 0;
	m = 0;
	while (sep[m])
		m++;
	m *= size - 1;
	while (x < size)
	{
		y = 0;
		while (strs[x][y])
		{
			y++;
			m++;
		}
		x++;
	}
	if (m <= 0)
		return (0);
	return (m + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		y;
	int		i;
	int		s;
	char	*str;

	if (!(str = malloc(sizeof(char) * ft_bigfatstrlen(size, strs, sep))))
		return (0);
	if (size == 0)
		return (str);
	x = -1;
	i = -1;
	while (++x < size)
	{
		y = -1;
		s = -1;
		while (strs[x][++y])
			str[++i] = strs[x][y];
		while (sep[++s] && x < size - 1)
			str[++i] = sep[s];
	}
	str[++i] = '\0';
	return (str);
}
