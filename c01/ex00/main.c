#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int a = 51;

	printf(" A antes de pointer: %d\n", a);
	ft_ft(&a);
	printf("A depois de pointer: %d\n ", a);
	return (0);
}
