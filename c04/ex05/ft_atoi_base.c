/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 10:13:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/17 10:26:37 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int result;
	int minus;
	int i;

	result = 0;
	minus = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10 + (str[i] - '0');
		i++;
	}
	return (minus * result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

void	ft_display(unsigned int n, char *base, unsigned int i)
{
	if (n > i - 1)
	{
		ft_display(n / i, base, i);
		n %= i;
	}
	ft_putchar(base[n]);
}

void	ft_atoi_base(char *str, char *base)
{
	int i;
	int nbr;

	i = 1;
	nbr = ft_atoi(str);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
				|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
				|| ft_base(base[i], base + i + 1))
			return ;
		i++;
	}
	if (i < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_display(-nbr, base, i);
	}
	else
		ft_display(nbr, base, i);
}
