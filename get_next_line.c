/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 12:32:37 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/04 17:23:27 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_n_line(int fd, int actual_line)
{
	int		n;
	char	*buffer;
	int		read_return;

	n = 0;
	read_return = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (read_return)
	{
		if (actual_line == n)
			return (1)
		read_return = read(fd, buffer, BUFFER_SIZE);
		if (lcd_bufchr(buffer, '\n') < BUFFER_SIZE)
			n++;
		if (lcd_bufchr(buffer, 0) < BUFFER_SIZE)
			break;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char	*line;
	char	*buffer;
	int		read_return;

	line = malloc(1000);
	read_return = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (BUFFER_SIZE <= 1 || fd <= 2 || !buffer)
		return (NULL);
	while (read_return)
	{
		ft_strncat(line, buffer, lcd_bufchr(buffer));
		printf("line: _%s_\n", line);
		read_return = read(fd, buffer, BUFFER_SIZE);
		printf("buffer: _%s_\n", buffer);
		if (lcd_bufchr(buffer) < BUFFER_SIZE)
		{
			ft_strncat(line, buffer, lcd_bufchr(buffer));
			return (free(buffer), line);
		}
	}
	return (free(buffer), NULL);
}
