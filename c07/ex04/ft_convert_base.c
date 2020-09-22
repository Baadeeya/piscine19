/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 17:26:23 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/22 22:22:56 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base(char c, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int		ft_strlen_atoi(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '+' || str[i] == '-'
				|| str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)
				|| ft_base(str[i], str + i + 1) >= 0)
			return (0);
	}
	if (i < 2)
		return (0);
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int nbr;
	int len;
	int n;

	if ((len = ft_strlen_atoi(base)) < 2)
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

int		ft_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + ft_nbrl(n / base_size, base_size));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*dest;
	unsigned int	nb;
	int				size;
	int				i;
	int				n;

	n = ft_base(base_from);
}
