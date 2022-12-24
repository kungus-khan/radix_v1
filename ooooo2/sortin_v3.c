/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortin_v3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:32:26 by aikram            #+#    #+#             */
/*   Updated: 2022/05/11 13:20:51 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dec_plc(s_ps *ps, int *a, int l)
{
	int i[3];

	i[0] = -1;
	i[1] = 0;
	i[2] = 0;
	ps->mdp = 0;
	ps->pdp = 0;
	while (++i[0] < l - 1)
	{
		if (a[i[0]] > a[i[0] + 1])
			i[1] = a[i[0]];
		if (a[i[0]] < a[i[0] + 1])
			i[2] = a[i[0]];
	}
	while (i[1] > 0)
	{
		i[1] /= 10;
		ps->pdp++;
	}
	while (i[2] < 0)
	{
		i[2] /= 10;
		ps->mdp++;
	}
}

void	sortz(s_ps *ps, int *a, int l)
{
	int amt;
	int	i;

	i = -1;
	if (ps->pdp >= ps->mdp)
		amt = ps->pdp;
	else
		amt = ps->mdp;
	ps->l = l;
	dec_plc(ps, a, l);
	while (++i < amt)
	{
		positive_a(ps, l);
	}
}
