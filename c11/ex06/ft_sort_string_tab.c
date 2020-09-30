/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:24:46 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/30 16:26:23 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_string_tab(char **tab)
{
	int i;
	int x;
	int size;

	size = 0;
	while (tab[size])
		size++;
	i = -1;
	while (i++ < size - 1)
	{
		x = -1;
		while (++x < size - 1 - i)
			if (ft_strcmp(tab[x], tab[x + 1]) > 0)
				ft_strs_swap(&tab[x], &tab[x + 1]);
	}
}
