/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_new_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 17:59:45 by bledda            #+#    #+#             */
/*   Updated: 2021/12/18 17:59:48 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/mlx_utils.h"

void	mlx_new_img(t_img *img, void *mlx_ptr, int width, int height)
{
	img->img = mlx_new_image(mlx_ptr, width, height);
	img->width = width;
	img->height = height;
	create_img(img, img->img);
}
