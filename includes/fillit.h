/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prastoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:28:08 by prastoin          #+#    #+#             */
/*   Updated: 2018/11/23 13:10:48 by amerrouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>


int		verif1(const char *line);
int		verif2(const char **tab);
int		ft_error(void);
int		abc(char **str);
void	mv_piece(char **sqr);
int		height_piece(char **sqr);
int		width_piece(char **sqr);
int		width_ele(char **sqr, int *size);
int		height_ele(char **sqr, int *size);
int		volume_ele(char **map, int *size);
void	rm_piece(char **map, int size_map, char c);

#endif
