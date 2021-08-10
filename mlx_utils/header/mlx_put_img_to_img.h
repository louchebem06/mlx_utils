/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_put_img_to_img.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bledda <bledda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 19:32:01 by bledda            #+#    #+#             */
/*   Updated: 2021/08/10 21:13:53 by bledda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_PUT_IMG_TO_IMG_H
# define MLX_PUT_IMG_TO_IMG_H

# include <mlx.h>
# include "mlx_keycode.h"

typedef struct s_data_img
{
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data_img;

typedef struct s_img
{
	void	*img;
	int		width;
	int		height;
}	t_img;

void	mlx_put_image_to_image(t_img *dest, t_img *src, int x, int y);

#endif
