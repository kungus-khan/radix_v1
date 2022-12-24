#include "push_swap.h"

void	push_a(s_ps *ps)// b to a
{
	ps->a -= 1;
	ps->sta[ps->a] = ps->stb[ps->b];
	ps->b += 1;
	write(1, "pa\n", 3);
}

void	push_b(s_ps *ps)// a to b
{
	ps->b -= 1;
	ps->stb[ps->b] = ps->sta[ps->a];
	ps->a += 1;
	write(1, "pb\n", 3);
}
