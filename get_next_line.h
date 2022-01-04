/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:41:56 by yschecro          #+#    #+#             */
/*   Updated: 2022/01/04 16:32:25 by yschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "unistd.h"
# include "stdlib.h"
# include "stdio.h"

char	*ft_strndup(char *str, int n);
void	ft_strncat(char *s1, char *s2, int n);
int		lcd_bufchr(char *buf);
int		ft_strlen(char *str);
char	*get_next_line(int fd);

#endif
