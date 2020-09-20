/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:47:22 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/20 10:47:26 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Ecrit un message d'erreur et renvoie 1.
*/

char	g_size;

int		ft_error(void)
{
	write(1, "ERROR\n", 6);
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

/*
** Initialise le tableau en placant des 0 aux adresses pointees pour s'assurer
** de leur contenu.
*/

void	ft_initiate_tab(char **tab)
{
	int	x;
	int y;

	x = -1;
	while (++x < g_size)
	{
		y = -1;
		while (++y < g_size)
		{
			tab[x][y] = 0;
		}
	}
}

/*
** 1) Verifie le nombre d'arguments et la taille de la string recue.
** - Renvoie ERROR si pas respecte et quitte le programme.
** 2) While qui verifie qu'il y a bien des espaces entre chaque chiffre.
** - Renvoie ERROR si pas respecte et quitte le programme.
** 3) Verifie que les chiffres en parametres ne sont pas plus petits que 1
** et ne depassent pas la valeur dans les adresses.
** -(you guessed it) Renvoie ERROR si pas respecte et auitte le programme.
*/

int		ft_initial_check(int argc, char **argv, char **hint)
{
	int	i;
	int	o;

	if (argc != 2 || ft_strlen(argv[1]) != (g_size * 8) - 1)
		return (ft_error());
	i = -1;
	while(++i < (g_size * 4) - 1)
		if (argv[1][i * 2 + 1] != ' ')
			return (ft_error());
	i = -1;
	while(++i < 4)
	{
		o = -1;
		while (++o < g_size)
	}
}
