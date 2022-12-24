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

void	dp_one(s_ps *ps, int *a, int l)
{
	int	j;

	j = -1;
	while (++j < l)
	{
		if (!j)
		{
			ps->ph = a[j];
			ps->p = j;
		}
		else if (a[j] < ps->ph)
		{ 
			ps->ph = a[j];
			ps->p = j;
		}
	}
	ps->dupa[ps->p] = 0;
}

void	dp_two(s_ps *ps, int *a, int l)
{
	int i;

	i = -1;
	while (++i < l)
{
		if (ps->ph < a[i])
	{
			ps->ph = a[i];
	ps->p = i;
	break;
	}
}
}

void	dp(s_ps *ps, int *a, int l)
{
int i;
int j;

i = 0;
ps->dupa = (int *)malloc(l * sizeof(int));
dp_one(ps, a, l);
while (++i < l)
	{
	ps->prh = ps->ph;
	dp_two(ps, a, l);
	j = -1;
	while (++j < l)
		{
		if (ps->ph > a[j] && a[j] > ps->prh)
		{
			ps->ph = a[j];
			ps->p = j;
		}
		}
	ps->dupa[ps->p] = i;
	}
}
