#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_checkFile(int file)
{
	if (file < 0)
	{
		ft_putrstr("Dict Error\n");
	}
}

/*
Takes in a number as an argument and converts it to a written letter value
Uses numbers.dict
	numbersDict is the file we want to open
	Checks using the ft_checkFile Function
	We want a buffer of 255 characters to store the changes without directly modifying the file
*/
int	main(int argCount, char **argVect)
{
	int		numbersDict;

	numbersDict = open("numbers.dict", O_RDWR);
	ft_checkFile(numbersDict)
	if (argCount == 1)
	{
		// Convert the value and use file I/O to check word
		// argVect[argCount] = 
		exit (1);
	}
	else if (argCount == 2)
	{
		// First argument (argVect[1][i]) will be new reference dictionary
		// Second argument (argVect[2][i]) will be value to convert
	}
	else
	{
		write(1, "Error\n", 6);
	}
	close(numbersDict);
	return (0);
}
