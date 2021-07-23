int	is_lowercase(char c)
{
	while ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		if (!is_lowercase(str[i++]))
			return (0);
	return (1);
}
