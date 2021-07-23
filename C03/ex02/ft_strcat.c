char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
		++ptr;
	while (*src)
	{
		*ptr = *src;
		++src;
		++ptr;
	}
	*ptr = 0;
	return (dest);
}
