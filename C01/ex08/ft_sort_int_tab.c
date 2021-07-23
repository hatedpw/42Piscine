void	ft_sort_int_tab(int	*tab, int size)

{
	int	mov;
	int	i;
	int	i2;

	i = 0;
	while (i++ < size)
	{
		i2 = 0;
		while (++i2 < size)
		{
			if (tab[i2 - 1] > tab[i2])
			{
				mov = tab[i2 - 1];
				tab[i2 - 1] = tab[i2];
				tab[i2] = mov;
			}
		}
	}
}	
