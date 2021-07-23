#include <unistd.h> 

void	ft_print_comb(void)

{
	char	array[5];

	array[0] = '0' - 1;
	array[3] = ',';
	array[4] = ' ';
	while (++array[0] <= '6')
	{
		array[1] = array[0];
		while (++array[1] < '8')
		{
			array[2] = array[1];
			while (++array[2] <= '9')
			{
				write(1, array, 5);
			}
		}
	}
	write(1, "789", 3);
}	
