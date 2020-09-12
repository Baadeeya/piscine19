/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:44:36 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/12 18:09:43 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	firstline(int x, int y, int i, int j)
{
	if (((i == 1) && (j == 1)) || (j == y))
	{
		ft_putchar('A');
		if (x == 1)
		{
			ft_putchar('\n');
		}
		i++;
	}
	if ((i != 1) && (i != x))
	{
		while (i <= x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (i == x)
		{
			ft_putchar('C');
			if (j == 1)
				ft_putchar('\n');
		}
	}
}

void	secondline(int x, int y, int i, int j)
{
	while (j < y - 1)
	{
		i = 1;
		ft_putchar('B');
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		if (x != 1)
			ft_putchar('B');
		ft_putchar('\n');
		j++;
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if ((x > 0) && (y > 0))
	{
		firstline(x, y, i, j);
		i = 1;
		if (y > 2)
			secondline(x, y, i, j);
		i = 1;
		if (y > 1)
			firstline(x, y, i, j);
	}
}
