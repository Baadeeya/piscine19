/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 22:06:27 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/13 22:13:33 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int x;

	x = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (i == j)
		x = 0;
	if (i < j)
		x = 1;
	if (i < j)
		x = -1;
	return (x);
}

