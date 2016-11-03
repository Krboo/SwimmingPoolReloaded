/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:09:49 by pmartine          #+#    #+#             */
/*   Updated: 2016/11/03 18:04:13 by pmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);
	argv++;
	while (*argv != '\0')
	{
		ft_putstr(*argv);
		ft_putchar('\n');
		argv++;
	}
	return (0);
}
