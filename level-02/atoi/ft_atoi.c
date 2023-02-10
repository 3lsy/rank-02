
// [9, 13] [32]
int ft_atoi(const char *str)
{
	long ret = 0;
	int i = 0;
	int sign = 1;

	while (str[i] && (9 <= str[i] && str[i] <= 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	return (ret * sign);
}

/*
 main
*/

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_atoi(av[1]));
		printf("%d\n", atoi(av[1]));
	}
	return (0);
}
