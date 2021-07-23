#include <unistd.h>

void	rec(int nb)
{
	char	c;

	if (!nb)
		return ;
	rec(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		rec(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}
