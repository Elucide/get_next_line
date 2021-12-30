/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:00:31 by yschecro          #+#    #+#             */
/*   Updated: 2021/12/30 19:07:39 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
			i++;
		return (i);
	}
	else
		return (0);
}

char	*ft_strndup(char *str, int n)
{
	int		i;
	char	*out;

	i = 0;
	out = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!out)
		return (NULL);
	if (!str)
		return (NULL);
	while (i < n && str[i])
	{
		out[i] = str[i];
		i++;
	}
	out[i] = 0;
	return (out);
}
