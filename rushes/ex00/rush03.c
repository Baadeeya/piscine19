/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:44:36 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/12 15:30:39 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	firstline(int x, int y, int i, int j, int k)
{
	if ((i == 1) && (j == 1))
	{
		ft_putchar('A');
		if (x == 1)
			y++;
		i++;
	}
	else if (i == x)
	{
		ft_putchar('C');
		i = 1;
		j++;
	}
	else
		while (i < k)
		{
			ft_putchar('B');
			i++;
		}
}

void	rush(int x, int y)
{
	int i;
	int j;
	int k;

	i = 1;
	j = 1;
	k = x - 1;
	if ((x > 0) || (y > 0))
	{
		while (j < y++)
		{
			firstline(x, y, i, j, k);

		}
