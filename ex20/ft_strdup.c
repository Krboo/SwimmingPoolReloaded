/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:35:44 by pmartine          #+#    #+#             */
/*   Updated: 2016/11/03 15:43:51 by pmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*new_str;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	new_str = (char*)malloc(sizeof(*new_str) * len);
	if (new_str == NULL)
		return (NULL);
	while (i < len)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[len] = '\0';
	return (new_str);
}
