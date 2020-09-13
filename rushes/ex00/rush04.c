/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 16:53:35 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/13 17:49:43 by dgutin           ###   ########.fr       */
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
	ft_putchar('C');
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
		ft_putchar('A');
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
