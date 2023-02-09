
unsigned char swap_bits(unsigned char octet)
{
	unsigned char copy = octet;

	return (octet >> 4 | copy << 4);
}

/*
  test
*/
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", swap_bits(atoi(av[1])));
	return (0);
}
