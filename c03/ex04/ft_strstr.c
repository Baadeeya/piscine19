/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:59:58 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/15 12:44:15 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int x;

	i = 0;
	x = 0;
	if (*to_find == 0)
		return (str);
	while (str[i])
	{
		if (str[i] != to_find[x])
			i++;
		if (str[i] == to_find[x])
		{
			while ((to_find[x]) && (str[i + 1] == to_find[x + 1]))
				{
					x++;
					i++;
				}
			if str[i + 1] ?????????????????
		}
		i++;
	}
}
