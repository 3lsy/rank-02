
unsigned char reverse_bits(unsigned char octet) // ???? ????
{
	int ret = 0;
	int i = 0;

	while (i < 8)
	{
		ret <<= 1; // 0000 0000
		ret += octet & 1; // ???? ???? & 0000 0001 = 0000 000?
		octet >>= 1; // 0??? ????
		i++;
	}
	return (ret);
}

/*
  test
*/
# include <stdio.h>
# include <stdlib.h>
int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", reverse_bits(atoi(av[1])));
	return (0);
}
