
#include <unistd.h>

int in_string(char c, char *str)
{
	int i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

int is_behind(char c, char *str, int i)
{
	while (i > 0)
	{
		i--;
		if (str[i] == c)
			return (1);
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		char *str1 = av[1];
		char *str2 = av[2];
		while (str1[i])
		{
			char c = str1[i];
			if (!is_behind(c, str1, i) && in_string(c, str2))
				write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
