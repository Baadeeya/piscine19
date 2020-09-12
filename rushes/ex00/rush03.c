/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 09:44:36 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/12 10:15:40 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	char A;
	char B;
	char C;
	int i;
	char *tab1;
	char *tab2;

	A = 'A';
	B = 'B';
	C = 'C';
	i = 0;
	*tab1 = '\0';
	*tab2 = '\0';
	if ((x > 0) || (y > 0))
	{
		while (tab2[i++] != '\0')
		{
			while (tab1[i++] != '\0')
			{
				ft_putchar('A');
				 if (x > 1)
			}
