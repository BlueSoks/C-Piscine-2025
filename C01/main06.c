#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int	l;

	l = strlen(str) - 1;
	str = "Great, I am doing it again.";
	ft_strlen(str);
	printf("%s\n", str);
	printf("%d\n", l);
	printf("%d", ft_strlen(str));
	return (0);
}
