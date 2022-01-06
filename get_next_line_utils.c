/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:00:31 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/06 06:25:35 by yschecro         ###   ########.fr       */
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

char	*ft_strndup(char *str)
{
	int		i;
	char	*out;

	i = 0;
	while (str[i])
	{
		i++;
		if (str[i] == '\n')
			break ;
	}
	out = malloc((sizeof(char) * i));
	if (!out)
		return (NULL);
	i = -1;
	while (str[++i] != '\n' && str[i])
		out[i] = str[i];
	out[++i] = 0;
	return (out);
}
    
int	lcd_bufchr(char *buf, char c)
{
	int	len;

	len = 0;
	while (buf[len])
	{
		if (buf[len] == c)
			return (1);
		len++;
	}
	return (0);
}

char	*ft_strjoin(char *buffer, char *save)
{
	char	*new_line;
	int		i;
	int		j;

	j = -1;
	i = -1;
	new_line = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(save) + 1));
	if (!new_line)
		return (NULL);
	while (buffer[++i])
		new_line[i] = save[i];
	while (save[++i])
		new_line[i] = buffer[++j];
	new_line[i] = 0;
	return (new_line);
}
