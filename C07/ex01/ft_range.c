#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	*temp;

	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * ((long long)max - min));
	if (!ret)
		return (0);
	temp = ret;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}
