/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_get_img_pixel.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehran <mmehran@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 22:00:39 by mmehran           #+#    #+#             */
/*   Updated: 2021/10/13 17:45:38 by mmehran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/mlx_utils.h"

unsigned int	mlx_get_pixel_img(const t_img *img, int x, int y)
{
	if (x < 0 || x >= img->width || y < 0 || y >= img->height)
		return (0);
	return (*(unsigned int *)(img->data.addr
		+ (y * img->data.line_length + x * (img->data.bits_per_pixel / 8))));
}
