/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 22:42:40 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/13 19:01:43 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_alpha(char c)
{
	return ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (str[0] && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
		i++;
	}
	while (str[i])
	{
		if (!ft_alpha(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (ft_alpha(str[i - 1]) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
