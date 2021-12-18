/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_put_pixel_to_img.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:49:46 by bledda            #+#    #+#             */
/*   Updated: 2021/10/14 03:58:01 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/mlx_utils.h"

void	mlx_put_pixel_to_img(t_img *dest, int x, int y, unsigned int color)
{
	char	*dst;

	if (x < 0 || x >= dest->width || y < 0 || y >= dest->height)
		return ;
	if (color == 0xFF000000)
		return ;
	dst = dest->data.addr + (y * dest->data.line_length
			+ x * (dest->data.bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
