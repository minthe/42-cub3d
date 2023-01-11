/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 08:15:38 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/01/11 18:05:14 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	check_elements(t_data *data)
{
	if (!data->no)
		data->err = 1;
	if (!data->so)
		data->err = 2;
	if (!data->we)
		data->err = 3;
	if (!data->ea)
		data->err = 4;
	if (!data->f_set)
		data->err = 5;
	if (!data->c_set)
		data->err = 6;
	if (!data->map)
		data->err = 7;
}