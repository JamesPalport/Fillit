/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mv_piece.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 13:36:07 by amerrouc          #+#    #+#             */
/*   Updated: 2018/11/23 11:51:41 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>
static int	*pos_min(char **sqr)
{
	int	i;
	int	j;
	int	*min;

	i = -1;
	if (!(min = (int *)malloc(sizeof(int) * 2)))
		return (NULL);
	min[0] = 4;
	min[1] = 4;
	while (++i < 4)
	{
		j = 0;
		while (j < min[1])
		{
			if (sqr[i][j] != '.')
			{
				min[0] = min[0] < i? min[0]: i;
				min[1] = min[1] < j? min[0]: j;
				break ;
			}
			j++;
		}
		printf("min :%d|%d\n", min[0], min[1]);
	}
	return (min);
}

void		mv_piece(char **sqr)
{
	int	i;
	int	j;
	int	*min;

	if (!(min = pos_min(sqr)))
		return ;
	if (!min[0] && !min[1])
		return ;
	i = min[0];
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (sqr[i][j] != '.')
			{
				sqr[i - min[0]][j - min[1]] = sqr[i][j];
				sqr[i][j] = '.';
			}
			j++;
		}
		i++;
	}
}
