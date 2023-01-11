/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:31:48 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/01/11 12:41:01 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	ft_open_file(int *fd, char *path, int opt)
{
	*fd = open(path, opt);
	if (*fd < 0)
	{
		write(2, "Error\n", 6);
		perror(path);
		return (0);
	}
	return (1);
}
