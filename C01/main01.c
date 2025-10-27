#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*********nbr;
	int	*p1;
	int	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;

	p1 = &a;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	nbr = &p8;
	a = 1;
	ft_ultimate_ft(nbr);
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%p\n",*nbr);
	return (0);
}

