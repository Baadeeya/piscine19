/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:44:36 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/13 17:56:53 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x, int y, int i)
{
	ft_putchar('A');
	if (x != 1)
		i++;
	if ((i != 1) && (i != x))
	{
		while (i <= x - 1)
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x != 1)
		ft_putchar('C');
	if (y > 1)
		ft_putchar('\n');
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

void	lastline(int x, int y, int i)
{
	ft_putchar('A');
	if (x != 1)
		i++;
	if ((i != 1) && (i != x))
	{
		while (i <= x - 1)
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x != 1)
		ft_putchar('C');
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
