/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:26:23 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/23 11:18:10 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_base(char c, char *base)
{
	int 			i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int		ft_strlen_base(char *base)
{
	int 			i;

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

int		ft_atoi_base(char *str, char *base)
{
	int 			i;
	int 			nbr;
	int 			len;
	int 			n;

	if ((len = ft_strlen_atoi(base)) < 2)
		return (NULL);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	n = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			n = 1 - n;
	nbr = 0;
	while ((i = ft_base(*str, base)) >= 0)
	{
		nbr = nbr * len + i;
		str++;
	}
	if (n)
		nbr *= -1;
	return (nbr);
}

int		ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrl(n / base_size, base_size));
}

void	ft_itoa_base(int nbr, int baselen)
{
	int 			i;
	int				neg;
	int				modulo;
	char			*dest;

	i = 0;
	if (nbr == 0)
	{
		dest[i++] = '0';
		dest[i] = '\0';
		return (dest);
	}
	if (nbr < 0)
	{
		neg = 1;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		modulo = nbr % baselen;
		str[i++] = (modulo > 9) ? (modulo - 10) + 'a' : rem + '0';
		nbr = nbr/baselen;
	}

}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				fromlen;
	int				tolen;

	if (!(fromlen = ft_strlen_base(base_from)))
		return (NULL);
	if (!(tolen = ft_strlen_base(base_to)))
		return (NULL);
	if (!(dest = malloc(sizeof(char)) * baselen))
		return (NULL);
	if ((dest = ft_itoa_base(from, tolen)) < 2)
		return (NULL);
}
