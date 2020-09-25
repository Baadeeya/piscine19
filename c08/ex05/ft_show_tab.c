/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 18:34:31 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/25 16:58:58 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(unsigned int nb)
{
	if (nb)
	{
		ft_display(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (!nb)
		ft_putchar('0');
	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	else
		n = nb;
	ft_display(n);
	ft_putchar('\n');
}

void	ft_putstr(char *str)
{
	int				i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
	ft_putchar('-');
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int				i;

	i = -1;
	while (par[++i])
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
	}
}
