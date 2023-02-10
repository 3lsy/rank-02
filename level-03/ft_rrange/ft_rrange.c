#include <stdlib.h>

int ft_abs(int x)
{
	if (x < 0)
		return -x;
	return x;
}
#include <unistd.h>
int *ft_rrange(int start, int end)
{
	int range = (ft_abs(end - start) + 1);
	int *ret = malloc(sizeof(int) * range);
	int direction;
	int i = 0;

	if (end > start)
		direction = -1;
	else
		direction = 1;

	while (i < range)
	{
		ret[i++] = end;
		end += direction;
	}
	return (ret);
}

/*
  test
*/
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int start = atoi(av[1]);
		int end = atoi(av[2]);
		int *vec = ft_rrange(start, end);

		int i = 0;
		while (i < ft_abs(end - start) + 1)
		{
			printf("%d, ", vec[i]);
			i++;
		}
		printf("\n");
	}
	return (0);
}
