
#include <unistd.h>
#include <stdlib.h>

int ft_isspace(char c)
{
	return (9 <= c && c <= 32);
}

int skip_spaces(char *str, int i)
{
	while (str[i] && ft_isspace(str[i])) // skip spaces
		i++;
	return (i);
}

int skip_word(char *str, int i)
{
	while (str[i] && !ft_isspace(str[i])) // skip word
			i++;
	return (i);
}

int	count_words(char *str)
{
	int i = 0;
	int	words = 0;

	while (str[i])
	{
		words++;
		i = skip_spaces(str, i);
		i = skip_word(str, i);
		i = skip_spaces(str, i);
		if (str[i])
			i++;
	}
	return (words);
}

int count_letters(char *str)
{
	int i = 0;
	int letters = 0;

	while (str[i])
	{
		if (str[i] && !ft_isspace(str[i]))
			letters++;
		i++;
	}
	return (letters);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *str = av[1];
		int cwords = count_words(av[1]);
		int cletters = count_letters(av[1]);
		int i = 0;

		if (cwords == 1)
		{
			char c;
			while (str[i])
			{
				c = str[i];
				if (str[i] && !ft_isspace(str[i]))
					write(1, &c, 1);
				i++;
			}
		}
		else
		{
			i = skip_spaces(str, i);
			i = skip_word(str, i);

			while (str[i])
			{
				i = skip_spaces(str, i);
				while (str[i] && !ft_isspace(str[i]))
					ft_putchar(str[i++]);
				if (str[i])
				{
					write(1, " ", 1);
					i++;
				}
			}
			i = skip_spaces(str, 0);
			while (str[i] && !ft_isspace(str[i]))
				ft_putchar(str[i++]);
		}
	}
	write(1, "\n", 1);
	return (0);
}
