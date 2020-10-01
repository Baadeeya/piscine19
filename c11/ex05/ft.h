/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:31:13 by dgutin            #+#    #+#             */
/*   Updated: 2020/10/01 11:15:43 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_error(int a);
int		ft_plus(int a, int b);
int		ft_minus(int a, int b);
int		ft_div(int a, int b);
int		ft_mod(int a, int b);
int		ft_multi(int a, int b);
int		ft_valid_op(char *av);

#endif
