/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 11:35:20 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/30 20:44:33 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_separator(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int		ft_strlen(char *str, char *charset)
{
	int		i;

	i = 0;
	while (str[i] && !ft_is_separator(str + i, charset))
		i++;
	return (i);
}

int		ft_malloc(char *str, char *charset)
{
	int		i;
	int		word;

	word = 0;
	while (*str)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		i = ft_strlen(str, charset);
		str += i;
		if (i)
			word++;
	}
	return (word);
}

char	*ft_strdup(char *src, int w)
{
	char	*dest;

	if (!(dest = malloc((w + 1) * sizeof(char))))
		return (NULL);
	dest[w] = '\0';
	while (w--)
		dest[w] = src[w];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		w;
	int		len;

	len = ft_malloc(str, charset);
	if (!(arr = malloc((len + 1) * sizeof(char*))))
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		w = ft_strlen(str, charset);
		if (!(arr[i] = ft_strdup(str, w)))
			return (NULL);
		str += w;
	}
	arr[len] = 0;
	return (arr);
}

#include <stdio.h>

int		main(void)
{
	char	**split;
	split = ft_split("Salut lesamis", " ");
	printf("[0] -- %s\n[1] -- %s\n[2] -- %s\n", split[0], split[1], split[2]);
	return (0);
}
