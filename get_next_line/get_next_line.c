/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdiego <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:36:58 by sdiego            #+#    #+#             */
/*   Updated: 2019/09/24 17:03:44 by sdiego           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_check_remember(char **remember, char **line, int fd, int read_bytes)
{
	char	*tmp;
	int		size;

	size = 0;
	while (remember[fd][size] != '\n' && remember[fd][size] != '\0')
		size++;
	if (remember[fd][size] == '\n')
	{
		*line = ft_strsub(remember[fd], 0, size);
		tmp = ft_strdup(remember[fd] + size + 1);
		free(remember[fd]);
		remember[fd] = tmp;
		if (remember[fd][0] == '\0')
			ft_strdel(&remember[fd]);
	}
	else if (remember[fd][size] == '\0')
	{
		if (read_bytes == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(remember[fd]);
		ft_strdel(&remember[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*remember[10240];
	char			buf[BUFF_SIZE + 1];
	int				read_bytes;
	char			*new_line;

	if (fd < 0 || line == NULL || fd > 10240 ||
			read(fd, NULL, 0) == -1 || BUFF_SIZE <= 0)
		return (-1);
	while ((read_bytes = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[read_bytes] = '\0';
		if (remember[fd] == NULL)
			remember[fd] = ft_strnew(1);
		new_line = ft_strjoin(remember[fd], buf);
		free(remember[fd]);
		remember[fd] = new_line;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (read_bytes < 0)
		return (-1);
	else if (read_bytes == 0 &&
			(remember[fd] == NULL || remember[fd][0] == '\0'))
		return (0);
	return (ft_check_remember(remember, line, fd, read_bytes));
}
