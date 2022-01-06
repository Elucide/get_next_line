/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 19:00:31 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/06 08:48:07 by yschecro         ###   ########.fr       */
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
	if (!str)
		return (NULL);
	out = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (str[i])
	{
		out[i] = str[i];
		i++;
		if (out[i - 1] == '\n')
			break ;
	}
	out[i] = 0;
	printf("save duped: _%s_\n", out);
	return (out);
}

int	lcd_bufchr(char *buffer, char c)
{
	int	len;

	len = 0;
	if (!buffer)
		return (0);
	while (buffer[len])
	{
		if (buffer[len] == c)
			return (1);
		len++;
	}
	return (0);
}

char	*ft_strjoin(char *save, char *buffer)
{
	char	*new_line;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!save)
		save = ft_strndup("\0");
	if (!buffer)
		return (NULL);
	new_line = malloc(sizeof(char) * (ft_strlen(buffer) + ft_strlen(save) + 1));
	if (!new_line)
		return (NULL);
	while (save[i])
	{
		new_line[i] = save[i];
		i++;
	}
	while (buffer[j])
	{
		new_line[i + j] = buffer[j];
		j++;
	}
	new_line[i + j] = 0;
	return (free(save), new_line);
}
