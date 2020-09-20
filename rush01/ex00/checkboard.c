/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 11:04:33 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/20 14:10:01 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_size;

/*
** Check if the same number repeats on the same column/row before checking
** the next one.
** Returns :
** 0 = OK
** 1 = error
*/

int		ft_check_dupes(char **tab)
{
	int		x;
	int		y;
	int		i;

	x = -1;
	while (++x < g_size)
	{
		y = -1;
		while (++y < g_size)
		{
			i = y;
			while (++i < g_size)
			{
				if (tab[x][y] == tab[x][i] && tab[x][y] != 0)
					return (1);
				if (tab[y][x] == tab[i][x] && tab[y][x] != 0)
					return (1);
			}
		}
	}
	return (0);
}

/*
** Increments 1 or -1
** Check if the adresses in the tab match the parameters in the arguments
** by keeping in memory the highest value of each column/row.
*/

int		ft_view_count_coll(char **tab, char **hint, char increment)
{
	int		x;
	int		y;
	int		viewheight;
	int		viewcount;

	x = -1;
	while (++x < g_size)
	{
		viewheight = 0;
		viewcount = 0;
		y = (increment == 1) ? 0 : g_size - 1;
		while (y > -1 && y < g_size)
		{
			if (tab[x][y] > viewheight)
			{
				viewheight = tab[x][y];
				viewcount++;
			}
			y += increment;
		}
		if (viewcount != hint[(increment == 1) ? 0 : 1][x])
			return (1);
	}
	return (0);
}

int		ft_view_count_row(char **tab, char **hint, char increment)
{
	int		x;
	int		y;
	int		viewheight;
	int		viewcount;

	y = -1;
	while (++y < g_size)
	{
		viewheight = 0;
		viewcount = 0;
		x = (increment == 1) ? 0 : g_size - 1;
		while (x > -1 && x < g_size)
		{
			if (tab[x][y] > viewheight)
			{
				viewheight = tab[x][y];
				viewcount++;
			}
			x += increment;
		}
		if (viewcount != hint[(increment == 1) ? 0 : 1][y])
			return (1);
	}
	return (0);
}

/*
** Calls the previous functions. If increments is 1, reads
** from one side to another, and the other way around with -1.
*/

int		ft_check_hints(char **tab, char **hint)
{
	if (ft_view_count_coll(tab, hint, 1) || ft_view_count_coll(tab, hint, -1) ||
			ft_view_count_row(tab, hint, 1) ||
			ft_view_count_coll(tab, hint, -1))
		return (1);
	return (0);
}

int		ft_check_board(char **tab, char **hint)
{
	if (ft_check_dupes(tab) || ft_check_hints(tab, hint))
		return (1);
	return (0);
}
