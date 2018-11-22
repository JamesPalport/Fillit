/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_piece.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:58:34 by amerrouc          #+#    #+#             */
/*   Updated: 2018/11/22 17:23:24 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		rm_piece(char **map, int size_map, char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < size_map)
	{
		j = 0;
		while (j < size_map)
		{
			if (map[i][j] == c)
				map[i][j] = '.';
			j++;
		}
		i++;
	}
}

static int	put_piece(char **map, char **pc, int i, int j, int *size_pc)
{
	int	x;
	int	y;

	y = 0;
	while (y < size_pc[0])
	{
		while (x < size_pc[1])
		{
			if (map[i + y][j + x] != '.' && pc[x][y] != '.')
				return (0);
			if (map[i + y][j + x] == '.')
				map[i + y][j + x] = pc[y][x];
			x++;
		}
		y++;
	}
	return (1);
}

int			insert_piece(char **map, char **pc, int	size_map)
{
	int	i;
	int	j;
	int	size_pc[2];

	size_pc[0] = height_piece(pc);
	size_pc[1] = width_piece(pc);
	i = 0;
	while (i <= size_map - size_pc[0])
	{
		j = 0;
		while (j <= size_map - size_pc[1])
		{
			if (map[i][j] == '.')
				if (put_piece(map, pc, i, j, size_pc))
					return (1);
			j++;
		}
		i++;
	}
	return (0);
}
