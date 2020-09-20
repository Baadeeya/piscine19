/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 14:25:35 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/20 14:58:11 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	g_size;

int		ft_error(void);
int		ft_check_board(char **tab, char **hint);
int		ft_print_victory(char **tabm char **hint);
int		ft_check_dupes(char **tab);

/*
** Return :
** 1 = ERROR
** 0 = Still searching
** -1 = Victory
*/

int		ft_backtracking_final(char **tab, char **hint)
{
	int		i;

	i = 0;
	while (++i <= g_size)
	{
		tab[(int)g_size - 1][(int)g_size - 1] = i;
		if (!ft_check_board(tab, hint))
			return (ft_print_victory(tab, hint));
	}
	tab[(int)g_size - 1][(int)g_size - 1] = 0;
	return (0);
}

