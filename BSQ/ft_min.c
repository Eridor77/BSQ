/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 15:38:25 by rlavallo          #+#    #+#             */
/*   Updated: 2014/09/16 19:29:19 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_matrix.h"

int		ft_min(int **matrix, int x, int y)
{
	int min;

	if (matrix[(x + 1)][y] < matrix[x][y + 1])
		min = matrix[(x + 1)][y];
	else
		min = matrix[x][(y + 1)];
	if (matrix[(x + 1)][(y + 1)] < min)
		min = matrix[(x + 1)][(y + 1)];
	return ((min += 1));
}
