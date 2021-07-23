int	g_board[5][5];
extern int	g_check_row[5][5];
extern int	g_check_col[5][5];
extern int	g_conditions[20];
extern int	*g_start_ptr[4];
extern int	b_offset[4][2];

int	is_valid_board(void);
int	fill_board(int	r, int	c);
void	ft_putchar(char	c);

void	print_board(void)
{	
	int	r;
	int	c;

	r = 0;
	while (++r < 5)
	{
		c = 0;
		while (++c < 4)
		{
			ft_putchar('0' + g_board[r][c]);
			ft_putchar(' ');
		}
		ft_putchar('0' + g_board[r][c]);
		ft_putchar('\n');
	}
}

int	fill_board_sec(int r, int c)
{
	int	val;

	val = 0;
	while (++val < 5)
	{
		if (g_check_row[r][val] || g_check_col[c][val])
			continue;
		g_check_row[r][val] = 1;
		g_check_col[c][val] = 1;
		g_board[r][c] = val;
		if (fill_board(r, c + 1))
			return (1);
		g_check_row[r][val] = 0;
		g_check_col[c][val] = 0;
	}
	return (0);
}

int	fill_board(int r, int c)
{
	if (r == 5)
	{
		if (is_valid_board())
		{
			print_board();
			return (1);
		}
		return (0);
	}
	if (c == 5)
		return (fill_board(r + 1, 1));
	else
		return (fill_board_sec(r, c));
}

void	init(void)
{
	int	i;
	int	j;

	i = 0;
	while (++i < 5)
	{
		j = 0;
		while (++j < 5)
		{
			g_check_row[i][j] = 0;
			g_check_col[i][j] = 0;
		}
	}
	g_start_ptr[0] = &g_board[1][1];
	g_start_ptr[1] = &g_board[4][1];
	g_start_ptr[2] = &g_board[1][1];
	g_start_ptr[3] = &g_board[1][4];
	b_offset[0][0] = 5;
	b_offset[0][1] = 1;
	b_offset[1][0] = -5;
	b_offset[1][1] = 1;
	b_offset[2][0] = 1;
	b_offset[2][1] = 5;
	b_offset[3][0] = -1;
	b_offset[3][1] = 5;
}

int	rush(void)
{
	init();
	return (fill_board(1, 1));
}
