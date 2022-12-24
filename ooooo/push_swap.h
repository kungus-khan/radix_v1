/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:37:57 by aikram            #+#    #+#             */
/*   Updated: 2022/05/12 13:48:15 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct t_ps {
  int bk[4];
  int bbk[10];

// //holdin and rollin
//   int hu;
//   int hd;

// indexer & stackz
	int *sta;
	int *stb;
	int a;
	int b;
	int m;
	int flip;

//length
	int l;

	int prh;
	int ph;
	int p;

// place holderz
	int i;
	int j;

	int up;
	int upos;
	int dn;
	int dpos;

// push func
	// int a; // 0 is 0 and when ever pushed should go one step beneath!
	// int b; //0 should be max and vice versa
} s_ps;

void	push_swap(int *a, int l);

void	ft_spit(char const *s, char c, char **strr, int *i);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
int		ft_not_atoi(char *str);

void	swat(int *a, int *b, char ab);
void	rrot(int *a, int l, int start, char ab);
void	rot(int *a, int l, int start, char ab);
void	repeat(int *a, int l, int s, int r, int rr, char ab);
int		*two(int *a);
void	three(int *a, int l, int i);
void	four(int *a, int l, int i);
void	five(int *a, int l, int i);
void	sus(int *a, int l, int i);
void	sussy_baka(int *a, int l, int i, int *j);

int		median(int *a, int l);

void	big_boi(int *a, int l);

void	chkr_dup(int *i, int *ints);
void	dp(s_ps *ps, int *a, int l);
void	dp_one(s_ps *ps, int *a, int l);
void	dp_two(s_ps *ps, int *a, int l);
void	place_holderz(s_ps *ps, int m, int l);

#endif