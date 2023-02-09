# include <unistd.h>

void print_bits(unsigned char octet) //???? ????
{
	int comparation = 128; // 1000 0000
	int i = 0;

	while (i < 8)
	{
		if (octet & comparation)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		comparation >>= 1;
		i++;
	}
}

/*
  test
*/
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
		print_bits(atoi(av[1]));
}
