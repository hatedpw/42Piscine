#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ret;
	int	*temp;

	if (min >= max)
		return (0);
	ret = max - min;
	*range = (int *)malloc(sizeof(int) * ret);
	if (!*range)
		return (-1);
	temp = *range;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}
