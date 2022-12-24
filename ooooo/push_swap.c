
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 09:20:26 by aikram            #+#    #+#             */
/*   Updated: 2022/05/11 13:17:28 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int *a, int l) // sorting part
{
	if (l == 2)
		two(a);
	else if (l == 3)
		three(a, l, 0);
	else if (l == 4)
		four(a, l, 0);
	else if (l == 5)
		five(a, l, 0);
	else if (l == 6)
		sus(a, l, 0);
	else if (l < 200)
		big_boi(a, l);
	// else
		// vbig_boi(a, l);
}

int	*ac2(char **av, char **s, int *ints) // all ints in proper format
{
	int		i[4];

	i[0] = 0;
	i[1] = -1;
	i[3] = 0;
	while (av[++i[3]])
	{
		i[2] = -1;
		s = ft_split(av[i[3]], ' ');
		while (s[++i[2]])
		{
			ints[++i[1]] = ft_atoi(s[i[2]]);
			if (ft_not_atoi(s[i[2]]))
			{
				while (s[i[2]])
					free(s[i[2]++]);
				free(s);
				free(ints);
				return (0);
			}
			free(s[i[2]]);
		}
		free(s);
	}
	return (ints);
}

int	amt(char **av) // amount of arguments to sort!
{
	int	i;
	int	l;
	int	j;

	i = 0;
	j = 0;
	while (av[++i])
	{
		l = -1;
		while (av[i][++l])
		{
			if (l == 0 && av[i][l] != ' ' && av[i][l])
				j++;
			if (av[i][l] == ' ' && av[i][l + 1] != ' '
				&& av[i][l + 1])
				j++;
		}
	}
	return (j);
}

int	main(int ac, char **av)
{
	char	**str;
	int		*ints;
	int		i[4];

	if (ac >= 2)
	{
		i[1] = -1;
		i[0] = amt(av);
		// printf("amount = %d\n", i[0]);
		str = NULL;
		ints = malloc(sizeof(int) * i[0]);
		if (!ints)
			return (0);
		ints = ac2(av, str, ints);
		chkr_dup(i, ints);
		
		push_swap(ints, i[0]);
		free(ints);
	}
}
