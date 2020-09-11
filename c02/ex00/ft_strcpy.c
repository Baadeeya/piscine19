/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 14:17:16 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/11 15:59:08 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	char *strtemp = dest;
	if ((dest != NULL) && (src != NULL))
			{
				while (*src != NULL)
				{
					*dest++ = src++;
				}
			}
}

int	main(void)
{
	char *dest = "Collage";
	char *src = "pipou";

	*ft_strcpy(dest, src);
	ft_putstr(*dest);
	return (0);
}
