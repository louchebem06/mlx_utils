# Main test to minilibx_utils for minilibx

```c
#include <stdio.h>
#include <mlx.h>
#include "header/mlx_utils.h"

typedef struct s_vars
{
	void	*mlx;
	void	*win;
}			t_vars;

int	main(void)
{
	t_vars	win;
	t_img	screen;
	t_img	sprite[2];

	win.mlx = mlx_init();
	if (!win.mlx)
	{
		printf("Error\n\t-Environement variable.");
		return (1);
	}
	win.win = mlx_new_window(win.mlx, 524 * 2, 524, "test lib");

	// Generate img clear
	mlx_new_img(&screen, win.mlx, 524 * 2, 524);

	// Generate Sprite img
	mlx_generate_img(&sprite[0], win.mlx, "YOUR_IMG.xpm");
	mlx_generate_img(&sprite[1], win.mlx, "YOUR_IMG_2.xpm");

	// Write Sprite IMG 0 on Screen
	mlx_put_img_to_img(&screen, &sprite[0], 0, 0);

	// Write Sprite IMG 1 on Screen
	mlx_put_img_to_img(&screen, &sprite[1], 524, 0);

	// Put screen on Window
	mlx_put_image_to_window(win.mlx, win.win, screen.img, 0, 0);

	mlx_loop(win.mlx);
	return (0);
}
```
