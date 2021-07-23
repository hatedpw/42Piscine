#include <unistd.h>

char	*g_base;
int		g_len;

void	ft_print_num(int nbr)
{
	if (!nbr)
		return ;
	ft_print_num(nbr / g_len);
	write(1, &g_base[nbr % g_len], 1);
}

int	ft_get_len(void)
{
	int	chk[256];
	int	i;

	i = 0;
	while (i < 256)
		chk[i++] = 0;
	g_len = 0;
	while (g_base[g_len])
	{
		if (chk[(int)g_base[g_len]] || g_base[g_len] == '+'
			|| g_base[g_len] == '-')
			return (0);
		chk[(int)g_base[g_len++]] = 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	tmp;

	g_base = base;
	if (!ft_get_len() || g_len == 0 || g_len == 1)
		return ;
	tmp = nbr;
	if (tmp < 0)
	{
		tmp *= -1;
		write(1, "-", 1);
	}
	ft_print_num(tmp / g_len);
	write(1, &g_base[tmp % g_len], 1);
}
