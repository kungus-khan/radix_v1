#include "push_swap.h"

void	positive_a(s_ps *ps, int *a, int l)
{
	int	m;
	int	i;

	m = 9;
	i = ps->a - 1;
	while (++i < ps->l - ps->a)
	{
		while (0 >= m--)
		{
			if (a[i] % 10 == m && a[i] >= 0)
			{
				a[i] /= 10;
				if (i <= (ps->l - ps->a) / 2)
					rot(a, ps->a, i, 'a');
				else
					rrot(a, ps->a, i, 'a');
			}
			push_b(ps);
		}
	}
}

void	positive_b(s_ps *ps, int *a, int l)
{
	int	m;
	int	i;

	m = 9;
	i = ps->b - 1;
	while (++i < ps->l - ps->b)
	{
		while (0 >= m--)
		{
			if (ps->stb[i] % 10 == m && ps->stb[i] >= 0)
			{
				ps->stb[i] /= 10;
				if (i <= (ps->l - ps->b) / 2)
					rot(ps->stb, ps->b, i, 'b');
				else
					rrot(ps->stb, ps->b, i, 'b');
			}
			push_a(ps);
		}
	}
}

void	negative_a(s_ps *ps, int *a, int l)
{
	int	n;
	int	i;

	n = -1;
	i = ps->a - 1;
	while (++i < ps->l -ps->a)
	{
		while (n++ < 10)
		{
			if (a[i] % 10 == n && a[i] < 0)
			{
				a[i] /= 10;
				if (i <= (ps->l - ps->a) / 2)
					rot(a, ps->a, i, 'a');
				else
					rrot(a, ps->a, i, 'a');
				push_b(ps);
			}
		}
	}
}

void	negative_b(s_ps *ps, int *a, int l)
{
	int	n;
	int	i;

	n = -1;
	i = ps->b - 1;
	while (++i < ps->l - ps->b)
	{
		while (n++ < 10)
		{
			if (ps->stb[i] % 10 == n && ps->stb[i] < 0)
			{
				ps->stb[i] /= 10;
				if (i <= (ps->l - ps->b) / 2)
					rot(ps->stb, ps->b, i, 'b');
				else
					rrot(ps->stb, ps->b, i, 'b');
				push_a(ps);
			}
		}
	}
}