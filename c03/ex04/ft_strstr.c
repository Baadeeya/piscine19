/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgutin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:59:58 by dgutin            #+#    #+#             */
/*   Updated: 2020/09/15 15:37:59 by dgutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *aiguille;
	char *foin;

	aiguille = to_find;
	foin = str;
	if (*to_find == 0)
		return (str);
	while (1)
	{
		if (*aiguille == '\0')
			return ((char *)(foin - (aiguille - to_find)));
		if (*foin == *aiguille)
			aiguille++;
		else
			aiguille = to_find;
		if (*foin == '\0')
			break ;
		foin++;
	}
	return (0);
}
