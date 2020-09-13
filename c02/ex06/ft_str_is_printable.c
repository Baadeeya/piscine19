/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 22:36:19 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/13 22:32:18 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int i;
	int j;
	int print;

	i = 0;
	j = 0;
	print = 0;
	while (str[i])
	{
		if (32 <= str[i] && str[i] >= 126)
			j++;
		i++;
	}
	if (j == i)
		print = 1;
	if (str[i])
		print = 1;
	else
		print = 0;
	return (print);
}
