int	is_number(char c)
{
	while ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	is_lowercase(char c)
{
	while ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	is_uppercase(char c)
{
	while ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	is_char_of_word(char c)
{
	if (is_number(c))
		return (1);
	if (is_lowercase(c))
		return (1);
	if (is_uppercase(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first;

	i = 0;
	is_first = 1;
	while (str[i])
	{
		if (!is_char_of_word(str[i]))
			is_first = 1;
		else
		{
			if (is_first && is_lowercase(str[i]))
				str[i] = str[i] - 32;
			else if (!is_first && is_uppercase(str[i]))
				str[i] = str[i] + 32;
			is_first = 0;
		}
		++i;
	}
	return (str);
}
