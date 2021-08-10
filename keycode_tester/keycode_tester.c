#include <mlx.h>
#include <stdio.h>

typedef struct	s_vars
{
	void	*mlx;
	void	*win;
}				t_vars;

int	key_hook(int keycode, t_vars *vars)
{
	(void)vars;
	printf("%d\n", keycode);
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 200, 100, "Keycode Tester");
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_loop(vars.mlx);
}