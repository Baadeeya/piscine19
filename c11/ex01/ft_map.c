/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:44:28 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/28 13:13:01 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*res;

	i = -1;
	if (length < 1 || !(ret = malloc(length * (sizeof(int)))))
		return (NULL);
	while (++i < length)
		res[i] = f(tab[i]);
	return (res);
}
