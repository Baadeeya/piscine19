/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 14:22:29 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/27 16:49:51 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int        ft_is_separator(char str, char *charset)
{
    int        x;

    x = -1;
    while (charset[++x])
        if (str == charset[x])
            return (1);
    return (0);
}

int        ft_malloc(char *str, char *charset)
{
    int        i;
    int        word;

    i = 0;
    word = 0;
    while (str[i])
    {
        if (!(ft_is_separator(str[i], charset)))
            i++;
        else
        {
            i++;
            word++;
        }
    }
    return (word + 1);
}

int		ft_strlen(char *str, int i, char *charset)
{
	int		x;

	x = 0;
	while (!((ft_is_separator(str, charset))))
	{
		i++;
		x++;
	}
	return (x);
}

char    **ft_split(char *str, char *charset)
{
    int		i;
    int		x;
    int		position;
    char    **arr;

    i = 0;
    position = 0;
    x = 0;
    if (!(arr = malloc(sizeof(char*) * (1 + ft_malloc(str, charset)))))
		return (NULL);
    while (str[i])
    {
        if (!(ft_is_separator(str[i], charset)))
            i++;
        else
        {
			if (!(arr[x] = malloc(sizeof(char*)) * (ft_strlen(str, i, charset) + 1)))
				return (NULL);
            arr[x - 1][i] = '\0';
            //            arr[x] = 0;
            if (arr[x - 1])
            {
                position = i;
                while (--position >= 0)
                    arr[x - 1][position] = str[position];
            }
            i++;
        }
    }
    return (arr);
}

int        main(void)
{
    char **split;

    //    split[0] = malloc(sizeof(char*) * 1000);
    split = ft_split("Salut les amis", " ");

    printf("[0]%s\n", split[0]);
    return (0);
}
