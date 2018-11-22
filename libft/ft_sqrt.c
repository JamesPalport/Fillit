/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prastoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:26:33 by prastoin          #+#    #+#             */
/*   Updated: 2018/11/14 13:40:36 by prastoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long a;

	a = 0;
	while (a * a < nb)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}
