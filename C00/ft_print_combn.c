#include <unistd.h>

void ft_print_combn(int n)
{
	char	arr[n];
	int	i;
	int max_num;
	int last;

	i = 0;
	max_num = 9;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	i = 0;
	last = n - 1;
	while (arr[last] != max_num)
	{
		while (i < n)
		{
			write(1, &arr[i], 1);
			i++;
		}
		arr[last]++;
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}