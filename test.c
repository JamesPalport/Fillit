/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerrouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:55:18 by amerrouc          #+#    #+#             */
/*   Updated: 2018/11/22 17:24:14 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	(void)argc;
	int	i;

	i = 1;
	while (i <= 4)
		printf("%s\n", argv[i++]);
	i = 1;
	mv_piece(argv + 1);
	while (i <= 4)
		printf("%s\n", argv[i++]);
	rm_piece(argv + 1, 4, 'a');
	i = 1;
	while (i <= 4)
		printf("%s\n", argv[i++]);
	return (0);
}
