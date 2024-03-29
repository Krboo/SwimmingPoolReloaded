/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:13:48 by pmartine          #+#    #+#             */
/*   Updated: 2016/11/03 18:11:41 by pmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}
