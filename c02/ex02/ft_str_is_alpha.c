/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 21:48:14 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/12 22:20:57 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;
	int j;
	int alpha;

	i = 0;
	j = 0;
	alpha = 0;
	while (str[i])
	{
		if ((97 <= str[i] && str[i] >= 122) || (65 <= str[i] && str[i] >= 90))
		{
			j++;
		}
		i++;
	}
	if (j == i)
		alpha = 1;
	if (!(str[i]))
		alpha = 1;
	else
		alpha = 0;
	return (alpha);
}
