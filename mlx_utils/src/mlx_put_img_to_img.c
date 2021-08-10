/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_put_img_to_img.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:29:14 by bledda            #+#    #+#             */
/*   Updated: 2021/08/10 21:22:41 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/mlx_put_img_to_img.h"

static void	ft_put_pixel_img(t_data_img *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + y * data->line_length + x * (data->bits_per_pixel / 8);
	if (color > 0)
		*(unsigned int *)dst = color;
}

static unsigned int	ft_get_pixel_img(t_data_img *data, int x, int y)
{
	return (*(unsigned int *)(data->addr
		+ (y * data->line_length + x * (data->bits_per_pixel / 8))));
}

void	mlx_put_image_to_image(t_img *dest, t_img *src, int x, int y)
{
	t_data_img	img_src;
	t_data_img	img_dst;
	int			current_x;
	int			current_y;

	current_y = 0;
	current_x = 0;
	img_src.addr = mlx_get_data_addr(src->img, &img_src.bits_per_pixel,
			&img_src.line_length, &img_src.endian);
	img_dst.addr = mlx_get_data_addr(dest->img, &img_dst.bits_per_pixel,
			&img_dst.line_length, &img_dst.endian);
	while (current_y < src->height)
	{
		current_x = 0;
		while (current_x < src->width)
		{
			ft_put_pixel_img(&img_dst, current_x + x, current_y + y,
				ft_get_pixel_img(&img_src, current_x, current_y));
			current_x++;
		}
		current_y++;
	}
}
