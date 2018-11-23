/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:40:26 by amerrouc          #+#    #+#             */
/*   Updated: 2018/11/23 13:32:14 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
int		width_ele(char **sqr, int *size)
{
	int	i;
	int	j;
	int	x_min;
	int	x_max;

	x_min = 5;
	x_max = -1;
	i = 0;
	while (i < size[0])
	{
		j = 0;
		while (sqr[i][j] != '.' && j < size[1])
		{
			if (j < x_min)
				x_min = j;
			j++;
		}
		if (j > x_max)
			x_max = j;
		i++;
	}
	printf("xmax :%d\nxmin :%d\n", x_max, x_min);
	return (x_max - x_min);
}

int		height_ele(char **sqr, int *size)
{
	int	i;
	int	j;
	int	y_min;
	int	y_max;

	y_min = 5;
	y_max = -1;
	j = 0;
	while (j < size[1])
	{
		i = 0;
		while (i < size[0])
		{
			while(i < size[0] && sqr[i][j] != '.')
			{
				if (i < y_min)
					y_min = i;
				i++;
			}
			if (i > y_max && sqr[i - 1][j] != '.')
				y_max = i;
			i++;
		}
		j++;
	}
	printf("ymax :%d\nymin :%d\n", y_max, y_min);
	return (y_max - y_min);
}

int		volume_ele(char **map, int size[2])
{
	return (width_ele(map, size) * height_ele(map, size));
}

int		height_piece(char **sqr)
{
	int *size;
	int	h;

	if (!(size = malloc(sizeof(int) * 2)))
		return (-1);
	size[0] = 4;
	size[1] = 4;
	h = height_ele(sqr,  size);
	free (size);
	return (h);
}
int		width_piece(char **sqr)
{
	int *size;
	int	h;

	if (!(size = malloc(sizeof(int) * 2)))
		return (-1);
	size[0] = 4;
	size[1] = 4;
	h = width_ele(sqr, size);
	free (size);
	return (h);
}
