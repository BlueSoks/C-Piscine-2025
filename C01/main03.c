#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	d_div;
	int	d_mod;

	a = 250;
	b = 60;
	d_div = 0;
	d_mod = 0;
	div = &d_div;
	mod = &d_mod;	
	ft_div_mod(a, b, div, mod);
	printf("%d\n",*div);
	printf("%d\n", *mod);
	return (0);
}
