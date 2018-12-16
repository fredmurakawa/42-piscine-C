/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 10:24:12 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/29 10:24:13 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_check_args(argc))
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(fd, "open() error\n", 14);
			return (1);
		}
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) == -1)
		{
			write(fd, "close() error\n", 20);
			return (1);
		}
		return (0);
	}
	return (1);
}
