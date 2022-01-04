/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:00:31 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/04 17:19:28 by yschecro         ###   ########.fr       */
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

int	lcd_bufchr(char *buf, char c)
{
	int	len;

	len = 0;
	while (len <= BUFFER_SIZE)
	{
		if (buf[len] == c)
			return (len);
		len++;
	}
	return (BUFFER_SIZE);
}

void	ft_strncat(char *s1, char *s2, int n)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	while (j < n && s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = 0;
}		
