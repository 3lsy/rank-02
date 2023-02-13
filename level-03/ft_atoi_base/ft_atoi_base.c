/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echavez- <echavez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:15:20 by echavez-          #+#    #+#             */
/*   Updated: 2023/02/13 17:49:10 by echavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *get_base(int str_base, char *base_cpy)
{
	char *base = "0123456789abcdef";
	int i = 0;

	if (str_base < 0 || str_base > 16)
		return (0);
	while (base[i] && i < str_base)
	{
		base_cpy[i] = base[i];
		i++;
	}
	base_cpy[i] = '\0';
	return (base_cpy);
}

int pos_in_base(char *base, char c)
{
	int i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int ft_lowercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	long res = 0;
	int sign = 1;
	char base_cpy[16];
	char *base = get_base(str_base, base_cpy);
	if (!base)
		return (0);

	int i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && pos_in_base(base, ft_lowercase(str[i])) != -1)
	{
		res *= str_base;
		res += pos_in_base(base, ft_lowercase(str[i]));
		i++;
	}
	return (res * sign);
}

//test

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
	}
	return (0);
}
