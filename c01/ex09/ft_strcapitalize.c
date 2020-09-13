/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 11:18:38 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/13 14:35:02 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alphanum(char c)
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
		if (!alphanum(str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (alphanum(str[i - 1]) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}
