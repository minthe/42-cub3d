/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:28:02 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/01/11 17:35:04 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/cub3d.h"

void	keypress(int key, t_var *var)
{
	if (key == W)
		var->posy += 5;
	if (key == A)
		var->posx -= 5;
	if (key == S)
		var->posy -= 5;
	if (key == D)
		var->posy += 5;
}

static void	debug(t_var *var) // DEBUG
{
	int	i;
	printf("\n---- DEBUG ----\n\n");
	printf("data->f: %x\n", var->data->f);
	printf("data->c: %x\n\n", var->data->c);
	printf("data->p_set: %d\n\n", var->data->p_set);
	printf("data->f_set: %d\n\n", var->data->f_set);
	printf("data->c_set: %d\n\n", var->data->c_set);
	printf("data->map_lines: %d\n\n", var->data->map_lines);
	i = 0;
	while (var->data->map[i])
	{
		printf("%s$\n", var->data->map[i]);
		i++;
	}
	display_linked_list(var->data->map_lst);
}

int	main(int argc, char **argv)
{
	t_mlx	mlx_s;
	t_data	cub_s;
	t_var	var;

	var.data = &cub_s;
	var.mlx = &mlx_s;
	if (argc > 1 && init_struct(&var) && import_cub(&var, argv[1], ".cub"))
	{
		printf("running...\n");
	}
	debug(&var); // DEBUG
	cleanup(&var);
	return (0);
}
