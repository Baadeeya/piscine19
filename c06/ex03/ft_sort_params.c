/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 16:06:11 by dgutin            #+#    #+#             */
/*   Updated: 2020/10/01 17:04:04 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_display(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (!*s1)
		return (0);
	return (*s1 - *s2);
}

int		main(int ac, char **av)
{
	int		i;
	int		x;
	char	*tmp;

	i = 1;
	x = 1;
	while (i < ac)
	{
		x = 1;
		while (x < ac - 1)
		{
			if (ft_strcmp(av[x], av[x + 1]) > 0)
			{
				tmp = av[x];
				av[x] = av[x + 1];
				av[x + 1] = tmp;
			}
			x++;
		}
		i++;
	}
	ft_display(ac, av);
	return (0);
}
