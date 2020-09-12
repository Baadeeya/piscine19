/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:44:36 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/12 12:40:51 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if ((x > 0) || (y > 0))
	{
		while (y != j)
		{
			if ((j == 1) || (j == y))
			{
				ft_putchar('A');
				while (i != x - 1)
				{
					ft_putchar('B');
					i++;
				}
				if (i > 1)
					ft_putchar('C');
				if (j == 1)
					ft_putchar('\n');
				j++;
			}
			i = 1;
			if (!((j == 1) && (j == y)))
			{
				ft_putchar('B');
				while (i != x - 1)
				{
					ft_putchar(' ');
					i++;
				}
				if (j > 1)
					ft_putchar('B');
				ft_putchar('\n');
				j++;
			}
		}
		i = 1;
		ft_putchar('A');
		while (i != x - 1)
		{
			ft_putchar('B');
			i++;
		}
		if (i > 1)
			ft_putchar('C');
	}
}

int	main(void)
{
	rush(1, 1);
	return (0);
}
