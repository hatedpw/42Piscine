#include <unistd.h>

void	ft_putstr(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		++len;
	write(1, str, len);
}
