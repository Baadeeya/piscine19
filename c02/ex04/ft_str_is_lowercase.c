/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 22:30:06 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/12 22:32:46 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;
	int j;
	int lower;

	i = 0;
	j = 0;
	lower = 0;
	while (str[i])
	{
		if (97 <= str[i] && str[i] >= 122)
			j++;
		i++;
	}
	if (j == i)
		lower = 1;
	if (!(str[i]))
		lower = 1;
	else
		lower = 0;
	return (lower);
}
