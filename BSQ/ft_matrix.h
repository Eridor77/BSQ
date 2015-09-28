/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 15:40:10 by rlavallo          #+#    #+#             */
/*   Updated: 2014/09/16 18:22:28 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H
#include <stdlib.h>
#include <stdio.h>
int		**ft_matrix(char **tab, int h, int l, char empty, char obst);
int		ft_min(int **matrix, int x, int y);
#endif
