/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmelkony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 19:53:25 by vmelkony          #+#    #+#             */
/*   Updated: 2021/07/20 15:31:03 by vmelkony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "complex/complex.h"
#include <mlx.h>
#include <math.h>

#define X 630
#define Y 360

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bpp;
	int		line_length;
	int		endian;
}	t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void	juliapoint(t_data *data, int x, int y, int r, int depth, int max, t_complex cx, t_complex z);

int	main(void)
{
	t_complex c;
	void	*mlx;
	void	*win;
	t_data	img;

	c.real = 0.282;
	c.imag = -0.58;
	mlx = mlx_init();
	win = mlx_new_window(mlx, X, Y, "Hi!");
	img.img = mlx_new_image(mlx, 400, 400);
	img.addr = mlx_get_data_addr(img.img, &img.bpp, &img.line_length, &img.endian);
	mlx_put_image_to_window(mlx, win, img.img, 50, 50);
	mlx_loop(mlx);
}

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bpp / 8));
	*(unsigned int*)dst = color;
}

void	juliaset(t_data *data, int depth, t_complex cx, int r, int detail)
{
	float		x;
	float		y;
	t_complex	z;

	x = X / 2 - Y / 2;
	while (x < X / 2 + Y / 2)
	{
		y = 0;
		while (y < Y)
		{
			z.real = (2 * r * (x - X / 2) / Y);
			z.imag = (2 * r * (y - Y / 2) / Y);
			juliapoint(data, x, y, r, depth, depth, cx, z);
			y += detail;
		}
		x += detail;
	}
}

void	juliapoint(t_data *data, int x, int y, int r, int depth, int max, t_complex cx, t_complex z)
{
	if (ft_cabs(z) > r)
	{
		my_mlx_pixel_put(data, x, y, 0x00FF0000);
		depth = 0;
	}
	if (sqrt((x - X / 2) * (x - X / 2) + (y - Y / 2) * (y - Y / 2)))
	{
		my_mlx_pixel_put(data, x, y, 0);
	}
	if (depth < max / 4)
		return;
	juliapoint(data, x, y, r, depth - 1, max, cx, ft_cadd(ft_cpow(z, 2), cx));
}
