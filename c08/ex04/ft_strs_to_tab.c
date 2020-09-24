/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:18:59 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/24 22:42:20 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = -1;
	if (!(dest = malloc(sizeof(char)) * (ft_strlen(src) + 1)))
		return (NULL);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, int **av)
{
	int			i;
	t_stock_str	*tab;

	i = -1;
	if (ac < 0)
		ac = 0;
	if (!(tab = malloc(sizeof(struct s_stock_str) * (ac + 1))))
		return (NULL);
	while (++i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].cpy = ft_strdup(av[i]);
	}
	tab[i].str = 0;
	return (tab);
}
