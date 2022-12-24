/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortin_v2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:11:07 by aikram            #+#    #+#             */
/*   Updated: 2022/05/17 17:30:16 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sus(int *a, int l, int i)
{
	int	j[6];

	j[0] = i + 1;
	j[1] = i + 2;
	j[2] = i + 3;
	j[3] = i + 4;
	j[4] = i + 5;
	j[5] = i;
	sussy_baka(a, l, i, j);
	while (a[j[5]] < a[j[5] + 1] && j[5] < l - 1)
		if (j[5]++ == (l - 2))
			return ;
	write(1, "pb\n", 3);
	five(a, l, i + 1);
	write(1, "pa\n", 3);
}

void	sussy_baka(int *a, int l, int i, int *j)
{
	if (a[j[0]] < a[i] && a[j[0]] < a[j[1]] && a[j[0]] < a[j[2]]
		&& a[j[0]] < a[j[3]] && a[j[0]] < a[j[4]])
		swat(&a[i], &a[j[0]], 1);
	if (a[j[1]] < a[i] && a[j[1]] < a[j[0]] && a[j[1]] < a[j[2]]
		&& a[j[1]] < a[j[3]] && a[j[1]] < a[j[4]])
		repeat(a, l, i, 2, 0, 1);
	if (a[j[2]] < a[i] && a[j[2]] < a[j[0]] && a[j[2]] < a[j[1]]
		&& a[j[2]] < a[j[3]] && a[j[2]] < a[j[4]])
		repeat(a, l, i, 0, 3, 1);
	if (a[j[3]] < a[i] && a[j[3]] < a[j[0]] && a[j[3]] < a[j[1]]
		&& a[j[3]] < a[j[2]] && a[j[3]] < a[j[4]])
		repeat(a, l, i, 0, 2, 1);
	if (a[j[4]] < a[i] && a[j[4]] < a[j[0]] && a[j[4]] < a[j[1]]
		&& a[j[4]] < a[j[2]] && a[j[4]] < a[j[3]])
		rrot(a, l, i, 1);
}

void	big_boi(int *a, int l)
{
	s_ps ps;

	ps.m = l / 2;
	ps.stb = (int *)malloc(sizeof(int) * l);
	ps.b = l;
	ps.a = 0;
	ps.flip = 1;
	sortz(&ps, a, l);
	printf("length -> %d\n", l);
	for( int k = 0; k < l; k++)
		printf("%d\n", a[k]);
}
