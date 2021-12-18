/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_generate_img.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 17:59:16 by bledda            #+#    #+#             */
/*   Updated: 2021/12/18 17:59:36 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/mlx_utils.h"

void	mlx_generate_img(t_img *img, void *mlx_ptr, char *file)
{
	img->img = mlx_xpm_file_to_image(mlx_ptr, file,
			&img->width, &img->height);
	if (!img->img)
		printf("Error\n\t-Generate image:\n\t\t%s.", file);
	create_img(img, img->img);
}
