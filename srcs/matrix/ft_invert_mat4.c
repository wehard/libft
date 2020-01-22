/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invert_mat4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:06:21 by wkorande          #+#    #+#             */
/*   Updated: 2020/01/22 21:58:02 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "libft.h"
#include "ft_printf.h"


static double determinant(t_mat4x4 m)
{
	double value;

	value =
	m.m[0][3] * m.m[1][2] * m.m[2][1] * m.m[3][0] - m.m[0][2] * m.m[1][3] * m.m[2][1] * m.m[3][0]-m.m[0][3] * m.m[1][1] * m.m[2][2] * m.m[3][0]+m.m[0][1] * m.m[1][3] * m.m[2][2] * m.m[3][0]+
	m.m[0][2] * m.m[1][1] * m.m[2][3] * m.m[3][0] - m.m[0][1] * m.m[1][2] * m.m[2][3] * m.m[3][0]-m.m[0][3] * m.m[1][2] * m.m[2][0] * m.m[3][1]+m.m[0][2] * m.m[1][3] * m.m[2][0] * m.m[3][1]+
	m.m[0][3] * m.m[1][0] * m.m[2][2] * m.m[3][1] - m.m[0][0] * m.m[1][3] * m.m[2][2] * m.m[3][1]-m.m[0][2] * m.m[1][0] * m.m[2][3] * m.m[3][1]+m.m[0][0] * m.m[1][2] * m.m[2][3] * m.m[3][1]+
	m.m[0][3] * m.m[1][1] * m.m[2][0] * m.m[3][2] - m.m[0][1] * m.m[1][3] * m.m[2][0] * m.m[3][2]-m.m[0][3] * m.m[1][0] * m.m[2][1] * m.m[3][2]+m.m[0][0] * m.m[1][3] * m.m[2][1] * m.m[3][2]+
	m.m[0][1] * m.m[1][0] * m.m[2][3] * m.m[3][2] - m.m[0][0] * m.m[1][1] * m.m[2][3] * m.m[3][2]-m.m[0][2] * m.m[1][1] * m.m[2][0] * m.m[3][3]+m.m[0][1] * m.m[1][2] * m.m[2][0] * m.m[3][3]+
	m.m[0][2] * m.m[1][0] * m.m[2][1] * m.m[3][3] - m.m[0][0] * m.m[1][2] * m.m[2][1] * m.m[3][3]-m.m[0][1] * m.m[1][0] * m.m[2][2] * m.m[3][3]+m.m[0][0] * m.m[1][1] * m.m[2][2] * m.m[3][3];
	return (value);
}

/*
t_mat4x4	ft_invert_mat4(t_mat4x4 m)
{
	int column;
	int row;
	int j;
	column = 0;
	while (column < 4)
	{
		// Swap row in case our pivot point is not working
		if (m.m[column][column] == 0)
		{
			unsigned big = column;
			row = 0;
			while (row < 4)
			{
				if (fabs(m.m[row][column]) > fabs(m.m[big][column]))
					big = row;
				row++;
			}
			// Print this is a singular matrix, return identity ?
			if (big == column)
			{
				ft_printf("Singular matrix. Returning identity.\n");
				return (ft_ident_mat4());
			}
			// Swap rows
			else
			{
				j = 0;
				while (j < 4)
				{
					ft_swap_d(&m.m[column][j], &m.m[big][j]);
					ft_swap_d(&mat.m[column][j], &mat.m[big][j]);
					j++;
				}
			}
		}
		// Set each row in the column to 0
		for (unsigned row = 0; row < N; ++row) {
			if (row != column) {
				T coeff = m[row][column] / m[column][column];
				if (coeff != 0) {
					for (unsigned j = 0; j < N; ++j) {
						m[row][j] -= coeff * m[column][j];
						mat.m[row][j] -= coeff * mat.m[column][j];
					}
					// Set the element to 0 for safety
					m[row][column] = 0;
				}
			}
		}
		column++;
	}
	// Set each element of the diagonal to 1
	for (unsigned row = 0; row < N; ++row) {
		for (unsigned column = 0; column < N; ++column) {
			mat.m[row][column] /= m[row][row];
		}
	}
	*this = mat;
	return *this;
}
*/

t_mat4x4	ft_invert_mat4(t_mat4x4 m)
{
	t_mat4x4	a;
	double		d;
	int			r;
	int			c;

	a = ft_transpose_mat4(m);
	d = determinant(a);
	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			a.m[r][c] *= 1.0 / d;
			c++;
		}
		r++;
	}
	return (a);
}
