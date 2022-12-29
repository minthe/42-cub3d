/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:18:44 by vfuhlenb          #+#    #+#             */
/*   Updated: 2022/12/29 16:11:18 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

static void	init_cub(t_data *data)
{
	data->no = NULL;
	data->so = NULL;
	data->we = NULL;
	data->ea = NULL;
	data->f = NULL;
	data->c = NULL;
	data->map = NULL;
	data->map_lst = ft_calloc(1, sizeof(t_linked_list));
	initialize_list(data->map_lst);
	data->err = 0;
	data->err_map = 0;
}

static void	init_mlx(t_mlx *mlx)
{
	mlx->img = NULL;
	mlx->ptr = NULL;
	mlx->window = NULL;
}

int	init_struct(t_var *var)
{
	var->fd1 = 0;
	var->line = NULL;
	init_cub(var->data);
	init_mlx(var->mlx);
	var->posx = -1;
	var->posy = -1;
	return (1);
}
