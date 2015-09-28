/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 15:35:43 by rlavallo          #+#    #+#             */
/*   Updated: 2014/09/16 19:24:30 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_matrix.h"

int		**ft_matrix(char **tab, int h, int l, char empty, char obst)
{
	int     **matrix;
	int		x;
	int		y;
	//int		count;
	
	x = h;
	matrix = (int **)malloc (sizeof(int *) * h);
	//count = 0;
	while (x >= 0)
	{
		y = l;
		matrix[x] = (int *)malloc (sizeof(int) * l);
		while (y >= 0)
		{
			if (tab[x][y] == empty && x != h && y != l)
				matrix[x][y] = ft_min(matrix, x, y);
			else if(tab[x][y] == obst)
				matrix[x][y] = 0;
			else
				matrix[x][y] = 1;

			/*if (count < matrix[x][y])
				count = matrix[x][y];*/
			y--;
		}
		x--;
	}
	return (matrix);
}
