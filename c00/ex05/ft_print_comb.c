/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 10:40:02 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/10 11:30:51 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcharuse(int a, int b, int c)
{
	if (!(a == b && b == c && a == c))
	{
		ft_putchar('0' + a);
		ft_putchar('0' + b);
		ft_putchar('0' + c);
	}
	if (a != 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				ft_putcharuse(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
