/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:26:23 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/23 13:27:06 by dgutin           ###   ########.fr       */
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

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char	*ft_rev_tab(char *str)
{
	int				i;
	int				x;
	char			*dest;
	
	i = 0;
	x = -1;
	while (str[i])
		i++;
	if (!(dest = malloc((i + 1) * sizeof(char))))
		return (NULL);
	while (str[--i])
		dest[++x] = str[i];
	dest[i] = '\0';
	return (dest);
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

int		ft_atoi_base(char *str, char *base)
{
	int				i;
	int				nbr;
	int				len;
	int				n;

	if ((len = ft_strlen_base(base)) < 2)
		return (0);
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

int		ft_nbrlen(unsigned int nb, unsigned int baselen)
{
	if (nb < baselen)
		return (1);
	return (1 + ft_nbrlen(nb / baselen, baselen));
}

char	*ft_itoa_base(int nbr, int baselen, int m)
{
	int				i;
	int				neg;
	int				modulo;
	char			*dest;

	if (!(dest = malloc((m + 1) * sizeof(char))))
		return (NULL);
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
		dest[i++] = (modulo > 9) ? (modulo - 10) + 'a' : modulo + '0';
		nbr = nbr / baselen;
	}
	if (neg)
		dest[i++] = '-';
	ft_rev_tab(dest);
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	n;
	int				nb;
	int				m;
	int				baselen;

	if (!(baselen = ft_strlen_base(base_from)))
		return (NULL);
	if (!(baselen = ft_strlen_base(base_to)))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	n = (nb < 0) ? -nb : nb;
	m = ft_nbrlen(n, baselen);
	if (!(dest = ft_itoa_base(nb, baselen, m)))
		return (NULL);
	return (dest);
}

int	main(void)
{
	printf("%s", ft_convert_base("55cd53", "0123456789abcdef", "01"));
	return (0);
}
