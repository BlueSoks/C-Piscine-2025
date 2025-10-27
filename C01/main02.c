#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int	a = 5;
	int b = -50;
	int *aa;
	int	*bb;
	char m1[] = "a is  ";
	char m2[] = "b is ";
	
	aa = &a;
	bb = &b;
	write(1, m1, 5);
	printf("%d\n", a);
	write(1, m2, 5);
	printf("%d\n", b);
	ft_swap(aa, bb);
	write(1, m1, 5);
	printf("%d\n", a);
	write(1, m2, 5);
	printf("%d\n", b);	
}


