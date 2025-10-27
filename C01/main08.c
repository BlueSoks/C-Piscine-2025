#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main()
{
	int arr[] = {50, 20, 59, 12, 53, 7, 659, 5634, 21}; // size = 9
	int size;
	int i;

	size = sizeof(arr)/sizeof(arr[0]);
	ft_sort_int_tab(arr, size);
	
	for (i=0; i<size; i++)
	{
		printf("%d\n",arr[i]);
	}

	return (0);
	
}
