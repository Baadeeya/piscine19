/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 17:52:15 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/16 12:08:15 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int x;
	unsigned int taille;

	i = 0;
	x = 0;
	taille = 0;
	while (dest[i])
	{
		taille++;
		i++;
	}
	if ((size < taille) || size == 0)
		return (0);
	while (x < (size - taille - 1))
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	return (taille + x);
}
