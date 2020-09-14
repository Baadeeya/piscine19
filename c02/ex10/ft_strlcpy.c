/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:05:34 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/14 17:29:19 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

	i = ft_strlen(src);
	if (i + 1 < size)
	{
		j = 0;
		while (j < i)
			dest[j] = src[j];
	}
	else if (size)
	{
		j = 0;
		while (j < size - 2)
			dest[j] = src[j];
		dest[j] = '\0';
	}
	return (i);
}

int	main(void)
{
	int a;
	int b;
	char src[] = "Lol";
	char dest[] = "vim";
	
	b = 3;
	a = ft_strlcpy(dest, src, b);
	printf("%s, %s, %d", src, dest, b);
   return (0);
}   
