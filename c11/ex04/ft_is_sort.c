/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:57:57 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/28 15:12:40 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (i < length - 1 && x)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			x = 0;
		i++;
	}
	if (x != 1)
	{
		x = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
