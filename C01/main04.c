#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int	*a;
	int	*b;
	int	n1;
	int	n2;

	n1 = 250;
	n2 = 60;
	a = &n1;
	b = &n2;
	ft_ultimate_div_mod(a, b);
	printf("%d\n",n1);
	printf("%d\n",n2);
}
