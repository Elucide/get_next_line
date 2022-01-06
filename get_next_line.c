/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:32:37 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/06 06:39:02 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_fill_line(char *buffer, int fd, char *save)
{
	int		read_return;

	read_return = 1;
	while (read_return > 0 && lcd_bufchr(save, '\n'))
	{
		read_return = read(fd, buffer, BUFFER_SIZE);
		buffer[read_return] = 0;
		if (read_return <= 0)
			break ;
		save = ft_strjoin(save, buffer);
	}
	return (ft_strndup(save));
}

char	*clean_save(char *save)
{
	char	*out;
	int		i;
	int		j;

	i = 0;
	if (!save)
		return (NULL);
	while (save[i] && save[i + 1])
		i++;
	if (!save[i] && !save[i + 1])
		return (free(save), NULL);
	if (save[i])
		i++;
	out = malloc(sizeof(char) * (ft_strlen(save + i) + 1));
	if (!out)
		return (free(save), NULL);
	j = -1;
	while (save[i])
	{
		out[++j] = save[i];
		i++;
	}
	out[j++] = 0;
	return (free(save), out);
}	

char	*get_next_line(int fd)
{
	char		*line;
	char		*buffer;
	static char	*save = NULL;

	line = "";
	buffer = "";
	line = ft_fill_line(buffer, fd, save);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (BUFFER_SIZE < 1 || fd < 0 || !buffer || !save)
		return (NULL);
	save = clean_save(save);
	return (free(buffer), line);
}
