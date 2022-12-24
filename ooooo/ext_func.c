/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ext_func.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:30:22 by aikram            #+#    #+#             */
/*   Updated: 2022/04/18 14:32:38 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_spit(char const *s, char c, char **strr, int *i)
{
	while (++i[2] < i[1])
	{
		i[4] = 0;
		i[5] = -1;
		while (s[++i[3]] == c && s[i[3]])
			;
		while (s[i[3]] != c && s[i[3]])
		{
			i[4]++;
			i[3]++;
		}
		strr[i[2]] = (char *)malloc(sizeof(*strr[i[2]]) * (i[4] + 1));
		i[3] -= i[4];
		while (s[i[3]] != c && s[i[3]])
		{
			strr[i[2]][++i[5]] = s[i[3]];
			i[3]++;
		}
		strr[i[2]][++i[5]] = '\0';
	}
	strr[i[2]] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**strr;
	int		i[6];
	int		j;

	if (!s)
		return (0);
	j = -1;
	while (++j < 6)
		i[j] = -1;
	i[1] = 0;
	while (s[++i[0]])
	{
		if (i[0] == 0 && s[i[0]] != c && s[i[0]])
			i[1]++;
		if (s[i[0]] == c && s[i[0] + 1] != c && s[i[0] + 1])
			i[1]++;
	}
	strr = (char **)malloc(sizeof(*strr) * (i[1] + 1));
	if (!strr)
		return (0);
	ft_spit(s, c, strr, i);
	return (strr);
}

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				sign;

	sign = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (res > 2147483647 && sign == 1)
		write(2, "Error\n", 6);
	else if (res > 2147483648 && sign == -1)
		write(2, "Error\n", 6);
	else if (*str)
		write(2, "Error\n", 6);
	return (res * sign);
}

int	ft_not_atoi(char *str)
{
	unsigned long	res;
	int				sign;

	sign = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (res > 2147483647 && sign == 1)
		return (1);
	if (res > 2147483648 && sign == -1)
		return (1);
	if (*str)
		return (1);
	return (0);
}
