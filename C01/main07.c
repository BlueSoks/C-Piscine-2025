#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

void print_array(int *tab, int size)
{
	int	i;

	for (i = 0;i < size - 1; i++)
	{
		printf("%d ", *(tab+i));
	}
	printf("%d\n", *(tab + size -1));
}

int	main(void)
{
	int	*tab;
	int	size;
	int	array[6]= {35, 25, 15, 10, 5, 0};
	int	i;

	i = 0;
	size = sizeof(array)/sizeof(array[0]);
	tab = array;
	print_array(tab,size);
	ft_rev_int_tab(tab, size);
	print_array(tab,size);
	return (0);

}
