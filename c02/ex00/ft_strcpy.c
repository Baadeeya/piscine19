/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 14:17:16 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/12 14:53:24 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	while (src[i++])
	{
		dest[i] = src[i];
	}
	return (dest);
}

int	main(void)
{
	char *dest;
	char *src;

	dest[7] = "Bonjour";
	src[6] = "Salute";
	ft_strcpy(dest, src);
	return (0);
}
	
