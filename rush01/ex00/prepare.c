/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 10:47:22 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/20 14:02:13 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Prints an ERROR message and returns 1.
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
	while (str[i])
		i++;
	return (i);
}

/*
** Initializes the array by putting 0's to pointed adresses to be sure of
** their content.
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
** 1) Checks the number of arguments and the size of the string input.
** - Returns ERROR if incorrect and exits the program.
** 2) While that checks if there are spaces between figures.
** - Returns ERROR if incorrect and exits the program.
** 3) Checks that every figure input aren't smaller than 1 or bigger
** than the value in the adresses
** - (you guessed it) Returns ERROR if incorrect and exits the program.
*/

int		ft_initial_check(int argc, char **argv, char **hint)
{
	int	i;
	int	o;

	if (argc != 2 || ft_strlen(argv[1]) != (g_size * 8) - 1)
		return (ft_error());
	i = -1;
	while (++i < (g_size * 4) - 1)
		if (argv[1][i * 2 + 1] != ' ')
			return (ft_error());
	i = -1;
	while (++i < 4)
	{
		o = -1;
		while (++o < g_size)
		{
			hint[i][o] = 10 * (argv[i][(i * g_size + o) * 3] - '0');
			hint[i][o] += argv[1][(i * g_size + o) * 3 + 1] - '0';
			if (!(hint[i][o] >= 1 && hint[i][o] <= g_size))
				return (ft_error());
		}
	}
	return (0);
}
