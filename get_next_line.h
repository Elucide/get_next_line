/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:41:56 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/06 06:24:09 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//get_next_line_utils

int		ft_strlen(char *str);
char	*ft_strndup(char *str);
int		lcd_bufchr(char *buf, char c);
char	*ft_strjoin(char *buffer, char *save);

//get_next_line

char	*ft_fill_line(char *buffer, int fdi, char *save);
char	*clean_save(char *save);
char	*get_next_line(int fd);

#endif
