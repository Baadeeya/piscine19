/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 20:23:33 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/18 21:17:58 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int x;

	i = 0;
	x = 1;
	if (power < 1)
		return (0);
	if (power == 1)
		return (nb);
	while (i < power)
	{
		x *= nb;
		i++;
	}
	return (x);
}
