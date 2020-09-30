/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:54:30 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/30 11:56:03 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_valid_op(char *av)
{
	if (av[2] == '+' || av[2] == '-' ||
			av[2] == '/' || av[2] == '*' || av[2] == '%')
		return (1);
	write(1, "0", 1);
	return (0);
}

int	ft_calculus(char **av, int a, int b)
{
	if (*av[2] == '/')
	{
		if (*av[3] == '0')
			ft_error(1);
		else
			return (ft_div(a, b));
	}
	if (*av[2] == '%')
	{
		if (*av[3] == '0')
			ft_error(0);
		else
			return (ft_mod(a, b));
	}
	if (*av[2] == '+')
		return (ft_plus(a, b));
	if (*av[2] == '-')
		return (ft_plus(a, b));
	if (*av[2] == '*')
		return (ft_multi(a, b));
	return (0);
}

#include <stdio.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4)
		return (0);
	if (ft_valid_op(av[2]))
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	ft_putnbr(ft_calculus(av, a, b));
	return (0);
}
