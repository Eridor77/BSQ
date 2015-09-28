/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 15:32:15 by rlavallo          #+#    #+#             */
/*   Updated: 2014/09/16 19:38:42 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_matrix.h"

int		main(void)
{
		char	empty;
		char	obst;
		int		height;
		int		length;
		char    **tab;
		int		**matrix;
		int		x;
		int		y;

		empty = '.';
		obst = 'o';
		height = 10;
		length = 10;
		tab = (char **)malloc (sizeof(char *) * height);
		x = 0;
		y = 0;
		while (x <= height)
		{
			tab[x] = (char *)malloc (sizeof(char) * length);
			while (y <= length)
			{
				tab[x][y] = '.';
				y++;
			}
			y = 0;
			x++;
		}
		
		x = 0;
		y = 0;
		tab[5][4] = 'o';
		tab[4][5] = 'o';
		while (x <= height)
		{
			while (y <= length)
			{
				printf("%c", tab[x][y]);
				y++;
			}
			y = 0;
			printf("\n");
			x++;
		}

		x = 0;
		y = 0;	
		matrix = ft_matrix(tab, height, length, empty, obst);
		while (x <= height)
		{
			while (y <= length)
			{
				printf("%d", matrix[x][y]);
				y++;
			}
			printf("\n");
			y = 0;
			x++;
		}
	return (0);
}
