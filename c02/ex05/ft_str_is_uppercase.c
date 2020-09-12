/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 22:33:47 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/12 22:34:52 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int j;
	int alpha;

	i = 0;
	j = 0;
	upper = 0;
	while (str[i])
	{
		if (65 <= str[i] && str[i] >= 90)
			j++;
		i++;
	}
	if (j == i)
		upper = 1;
	if (!(str[i]))
		upper = 1;
	else
		upper = 0;
	return (upper);
}
