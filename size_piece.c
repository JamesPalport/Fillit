/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_piece.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:40:26 by amerrouc          #+#    #+#             */
/*   Updated: 2018/11/22 17:22:22 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
int		width_piece(char **sqr)
{
	int	i;
	int	j;
	int	x_min;
	int	x_max;

	x_min = 5;
	x_max = -1;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (sqr[i][j] != '.' && j < 4)
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

int		height_piece(char **sqr)
{
	int	i;
	int	j;
	int	y_min;
	int	y_max;

	y_min = 5;
	y_max = -1;
	j = 0;
	while (j < 4)
	{
		i = 0;
		while (sqr[i][j] != '.' && j < 4)
		{
			if (i < y_min)
				y_min = i;
			i++;
		}
		if (i > y_max)
			y_max = i;
		j++;
	}
	printf("ymax :%d\nymin :%d\n", y_max, y_min);
	return (y_max - y_min);
}
