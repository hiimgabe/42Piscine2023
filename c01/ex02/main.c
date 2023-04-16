#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int na, nb;
	na = 1;
	nb = 9;

	printf("   na : %d\n", na);
	printf("   nb : %d\n", nb);
	ft_swap(&na,&nb);
	printf("na dps: %d\n", na);
	printf("nb dps: %d\n", nb);
	return (0);
}
