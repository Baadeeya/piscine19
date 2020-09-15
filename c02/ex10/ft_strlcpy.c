/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:05:34 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/15 10:34:32 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = ft_strlen(src);
	if (i < size - 1)
	{
		while (j - 1 < i)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else if (size != 0)
	{
		while(j + 1 < i)
		{
			dest[j] = src[j];
			j++;
		}
	return (i);
}
