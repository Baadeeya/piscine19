/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 18:54:30 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/30 20:32:31 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_valid_op(char *av)
{
	if (av[2] == '+' || av[2] == '-' ||
			av[2] == '/' || av[2] == '*' || av[2] == '%')
		return (1);
	return (0);
}

int	ft_calculus(char **av)
{
	if (*av[2] == '/')
		return (3);
	if (*av[2] == '%')
		return (4);
	if (*av[2] == '+')
		return (0);
	if (*av[2] == '-')
		return (1);
	if (*av[2] == '*')
		return (2);
	else
		return (69);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	(*f[5])(int, int);

	f[0] = &ft_plus;
	f[1] = &ft_minus;
	f[2] = &ft_multi;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	if (ac != 4)
		return (0);
	if (ft_calculus(av) == 69)
		ft_putstr("0");
	else if (ft_valid_op(av[2]))
		return (0);
	else if (*av[2] == '/' && *av[3] == '0')
		ft_putstr("Stop : division by zero");
	else if (*av[2] == '%' && *av[3] == '0')
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr((f[ft_calculus(av)](a, b)));
	ft_putstr("\n");
	return (0);
}
