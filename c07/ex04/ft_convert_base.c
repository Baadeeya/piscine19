/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:26:23 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/23 15:50:22 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_base(char c, char *base)
{
	int				i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int		ft_strlen_base(char *base)
{
	int				i;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '+' || base[i] == '-'
				|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
				|| ft_base(base[i], base + i + 1) >= 0)
			return (0);
	}
	if (i < 2)
		return (0);
	return (i);
}

int		ft_atoi_base(char *str, char *base, int len)
{
	int				i;
	int				nbr;
	int				neg;

	if ((len = ft_strlen_base(base)) < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	neg = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = 1 - neg;
	nbr = 0;
	while ((i = ft_base(*str++, base)) >= 0)
		nbr = nbr * len + i;
	if (neg)
		nbr *= -1;
	return (nbr);
}

int		ft_nbrlen(unsigned int nb, unsigned int baselen)
{
	if (nb < baselen)
		return (1);
	return (1 + ft_nbrlen(nb / baselen, baselen));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				n;

	n = ft_strlen_base(base_from);
	if (!(n && (size = ft_strlen_base(base_to))))
		return (NULL);
	n = ft_atoi_base(nbr, base_from, n);
	nb = (n < 0) ? -n : n;
	i = ft_nbrlen(nb, size) + ((n < 0) ? 1 : 0);
	if (!(dest = malloc((i + 1) * sizeof(char))))
		return (NULL);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
