#include <unistd.h>

void	update(char *array, int a, int b)
{
	write(1, array, 7);
	if (array[b] == '9')
	{
		++array[a];
		array[b] = '0';
	}
	else
		++array[b];
}

void	ft_print_comb2(void)
{
	char	array[7];

	array[0] = '0';
	array[1] = '0';
	array[2] = ' ';
	array[5] = ',';
	array[6] = ' ';
	while (array[0] != '9' || array[1] != '8')
	{
		array[3] = array[0];
		if (array[1] == '9')
		{
			++array[3];
			array[4] = '0';
		}
		else
			array[4] = array[1] + 1;
		while (array[3] != '9' || array[4] != '9')
			update(array, 3, 4);
		update(array, 0, 1);
	}
	write(1, "98 99", 5);
}
