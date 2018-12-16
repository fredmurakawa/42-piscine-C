/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 21:29:22 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/04/02 21:29:27 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		open_file(char *argv)
{
	int		fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		write(2, "open() error\n", 14);
	}
	return (fd);
}

char	*read_file(int fd)
{
	char	buf;
	char	*str;
	int		i;
	int		row;
	int		col;

	row = -1;
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * 10000000001)))
		exit(EXIT_FAILURE);
	while ((read(fd, &buf, 1)))
	{
		if (row >= 0 && buf != '\n')
			col++;
		if (buf == '\n')
		{
			row++;
			col = 0;
		}
		str[i] = buf;
		i++;
	}
	g_infos.rows = row;
	str[i] = '\0';
	return (str);
}

void	close_file(int fd)
{
	if (close(fd) == -1)
	{
		write(2, "close() failed\n", 15);
	}
}

void	set_chars(char *str)
{
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	while (str[i + 1] != '\n')
		i++;
	g_infos.full = str[i];
	g_infos.obstacle = str[i - 1];
	g_infos.empty = str[i - 2];
}

int		ft_invalid_map(char *str)
{
	int		i;
	int		row;
	int		col;

	i = 0;
	row = -1;
	while (str[i])
	{
		if (row >= 0 && str[i] != g_infos.empty && str[i] != g_infos.obstacle
			&& str[i] != '\n')
			return (1);
		if (row >= 0 && str[i] != '\n')
			col++;
		if (row == 0 && str[i] == '\n')
			g_infos.cols = col;
		if (row > 0 && str[i] == '\n' && g_infos.cols != col)
			return (1);
		if (str[i] == '\n')
		{
			row++;
			col = 0;
		}
		i++;
	}
	return ((g_infos.rows < 1 && g_infos.cols < 1) ? 1 : 0);
}
