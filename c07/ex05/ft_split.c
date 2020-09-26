/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:00:12 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/26 21:45:06 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_separator(char *str, char *charset)
{
	int i;
	int x;

	i = -1;
	x = -1;
	if (!(*charset))
		return (-1);
	while (str[++i])
	{
		while (charset[++x])
		{
			if (str[i] == charset[x])
				return (i);
		}
		return (i);
	}
	return (-1);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		x;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = malloc(sizeof(char) * i + 1)))
		return (NULL);
	x = -1;
	while (src[++x])
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		position;
	int		count;
	int		memory;
	char	**arr;

	i = 0;
	position = 0;
	while (str[position])
	{
		count = ((ft_is_separator(str + position, charset)) - 1);
		if (!(arr = malloc(sizeof(char*) * i + 1)))
			return (NULL);
		if (!(arr[i] = malloc(sizeof(char) * i + 1)))
			return (NULL);
		if (count == -1)
			while (str[count++])
				*arr[i] = str[count];
		arr[i][count + 1] = '\0';
		position = count;
		while (-1 < count--)
			arr[i][count] = str[count];
		position++;
		i++;
		memory = -1;
		while (++memory < count)
			free(arr[count]);
	}
	return (arr);
}

int		main(void)
{
	char **split;

	split = ft_split("Salut les amis", " ");

	printf("[0]%s\n%s", split[0], split[1]);
	return (0);
}
