/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:51:09 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/17 18:06:49 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	unsigned int i;

	if (nb < 3)
		return (2);
	if (!(nb % 2))
		nb++;
	i = 3;
	while (i * i <= (unsigned int)nb)
	{
		if (!(nb % i))
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}

int	main(void)
{
	int a;
	a = ft_find_next_prime(38);
	printf("%d", a);
	return (0);
}
