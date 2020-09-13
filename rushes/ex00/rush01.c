/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:50:10 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/13 17:12:10 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	firstline(int x, int y, int i)
{
	ft_putchar('/');
	if (x != 1)
		i++;
	if ((i != 1) && (i != x))
	{
		while (i <= x - 1)
		{
			ft_putchar('*');
			i++;
		}
	}
	if (x != 1)
		ft_putchar(92);
	ft_putchar('\n');
}

void	secondline(int x, int y, int i, int j)
{
	while (j < y - 1)
	{
		i = 1;
		ft_putchar('*');
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
			ft_putchar('*');
		ft_putchar('\n');
		j++;
	}
}

void	lastline(int x, int y, int i)
{
	ft_putchar(92);
	if (x != 1)
		i++;
	if ((i != 1) && (i != x))
	{
		while (i <= x - 1)
		{
			ft_putchar('*');
			i++;
		}
	}
	if (x != 1)
		ft_putchar('/');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if ((x > 0) && (y > 0))
	{
		if (j == 1)
			firstline(x, y, i);
		if (y > 2)
			secondline(x, y, i, j);
		if (y > 1)
			lastline(x, y, i);
	}
}
