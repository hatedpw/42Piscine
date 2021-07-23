#include <unistd.h>

extern int	g_board[5][5];
int	g_check_row[5][5];
int	g_check_col[5][5];
int	g_conditions[20];
int	*g_start_ptr[4];
int	b_offset[4][2];

int	is_valid_board_sub(int *ptr, int offset, int con)
{
	int	i;
	int	cnt;
	int	max_val;

	i = 0;
	cnt = 0;
	max_val = 0;
	while (++i < 5)
	{
		if (*ptr > max_val)
		{
			max_val = *ptr;
			++cnt;
		}
		ptr += offset;
	}
	return (cnt == con);
}

int	is_valid_board(void)
{
	int	con;
	int	i;
	int	j;
	int	*ptr;

	con = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		ptr = g_start_ptr[i];
		while (j < 4)
		{
			if (!is_valid_board_sub(ptr, b_offset[i][0], g_conditions[con++]))
				return (0);
			ptr += b_offset[i][1];
			++j;
		}
		++i;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_white_space(char c)
{
	return (c == ' ' || (1 <= c && c <= 7));
}

int	is_valid_condition(char *condit)
{
	int	cnt;

	cnt = 0;
	while (*condit)
	{
		while (*condit && is_white_space(*condit))
			++condit;
		if (*condit)
		{
			if ('1' <= *condit && *condit <= '4')
			{
				if (cnt == 16 || (*(condit + 1) && !is_white_space(*(condit + 1) && (*condit + 4) && (*condit + 2))))
					return (0);
				g_conditions[cnt++] = *condit - '0';
			}
			else
				return (0);
			++condit;
		}
	}
	return (cnt == 16);
}
