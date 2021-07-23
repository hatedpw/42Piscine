int	ft_putchar(char c);

void	print_first_row(int x, int x_axis)
{
	if (x_axis == 1)
		ft_putchar('A');
	else if (x_axis > 1 && x_axis < x)
		ft_putchar('B');
	else if (x_axis == x)
		ft_putchar('A');
}

void	print_middle_rows(int x, int x_axis)
{
	if (x_axis == 1 || x_axis == x)
		ft_putchar('B');
	else if (x_axis > 1 && x_axis < x)
		ft_putchar(' ');
}

void	print_last_row(int x, int x_axis)
{
	if (x_axis == 1)
		ft_putchar('C');
	else if (x_axis > 1 && x_axis < x)
		ft_putchar('B');
	else if (x_axis == x)
		ft_putchar('C');
}

void	rush(int x, int y)
{
	int	x_axis;
	int	y_axis;

	x_axis = 1;
	y_axis = 1;
	while (y_axis <= y)
	{
		while (x_axis <= x)
		{
			if (y_axis == 1)
				print_first_row(x, x_axis);
			else if (y_axis > 1 && y_axis < y)
				print_middle_rows(x, x_axis);
			else if (y_axis == y)
				print_last_row(x, x_axis);
			x_axis++;
		}
		x_axis = 0;
		ft_putchar('\n');
		y_axis++;
	}
}
