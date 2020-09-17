/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:51:09 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/17 17:58:05 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 2;
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (nb / i != 1)
			nb++;
		return (nb);
	}
	return (0);
}
