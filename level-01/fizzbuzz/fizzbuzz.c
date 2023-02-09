/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echavez- <echavez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:04:31 by echavez-          #+#    #+#             */
/*   Updated: 2023/02/09 17:21:09 by echavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr((n / 10));
		ft_putchar((n % 10) + 48);
	}
	else if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		ft_putnbr(n);
	}
	else if (n < 10)
	{
		ft_putchar(n + 48);
	}
}

int main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i%3 == 0 && i%5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i%3 == 0)
			write(1, "fizz", 4);
		else if (i%5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 2);
		i++;
	}
	return (0);
}
