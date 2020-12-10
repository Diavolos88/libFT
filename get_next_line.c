/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealexa <ealexa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:52:05 by sjennett          #+#    #+#             */
/*   Updated: 2020/11/11 11:57:24 by ealexa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_save(char *save, char **line, int *flag, char **point)
{
	*point = NULL;
	if (!(*flag = 0) && save)
	{
		if ((*point = ft_strchr(save, '\n')))
		{
			*flag = 1;
			**point = '\0';
			if (!(*line = ft_strdup(save)))
				return (-1);
			ft_strcpy(save, ++(*point));
		}
		else
		{
			if (!(*line = ft_strdup(save)))
				return (-1);
			save[0] = '\0';
		}
	}
	else
	{
		if (!(*line = malloc(sizeof(char) * 1)))
			return (-1);
		(*line)[0] = '\0';
	}
	return (1);
}

int		ft_get_line_end(int *flag, char **save, char **point)
{
	*flag = 1;
	if (*save != NULL)
		free(*save);
	if (!(*save = ft_strdup(++(*point))))
		return (-1);
	return (0);
}

int		ft_get_line_middle(int fd, char *buffer, char **line, char **save)
{
	char	*tmp;
	int		flag;
	char	*point;
	int		count;

	if (check_save(*save, line, &flag, &point) == -1)
		return (-1);
	while (point == 0 && ((count = read(fd, buffer, BUFFER_SIZE)) != 0))
	{
		if (count == -1)
			return (-1);
		buffer[count] = '\0';
		if ((point = ft_strchr(buffer, '\n')))
			if (ft_get_line_end(&flag, save, &point) == -1)
				return (-1);
		tmp = *line;
		if (!(*line = ft_strjoin(tmp, buffer)))
		{
			free(tmp);
			return (-1);
		}
		free(tmp);
	}
	return (!ft_strlen(*save) && !count && !flag) ||
	(!(count || ft_strlen(*line) || flag == 1)) ? 0 : 1;
}

int		get_line_start(int fd, char **line, char **save)
{
	char		*buffer;
	int			res;

	*line = NULL;
	if (!(buffer = malloc(sizeof(char) *
	(BUFFER_SIZE > 0 ? BUFFER_SIZE + 1 : 1))))
		return (-1);
	res = (ft_get_line_middle(fd, buffer, line, save));
	free(buffer);
	return (res);
}

int		get_next_line(int fd, char **line)
{
	static char		*fd_args[1025];
	int				res;

	if (fd < 0 || !line || read(fd, 0, 0) || BUFFER_SIZE < 0 || fd > 1025)
	{
		if (line)
			*line = NULL;
		return (-1);
	}
	if (BUFFER_SIZE == 0)
	{
		*line = NULL;
		return (0);
	}
	res = get_line_start(fd, line, &(fd_args[fd]));
	if (res <= 0 && fd_args[fd] != NULL)
	{
		free(fd_args[fd]);
		fd_args[fd] = NULL;
	}
	return (res);
}
