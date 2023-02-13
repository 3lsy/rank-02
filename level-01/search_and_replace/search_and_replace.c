/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echavez- <echavez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:18:27 by echavez-          #+#    #+#             */
/*   Updated: 2023/02/13 12:01:20 by echavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int in_str(char c, char *str)
{
	int i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int is_alpha(char c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'C'));
}

int main(int ac, char **av)
{
	int str_len = ft_strlen(av[1]);
	if (ac == 4 && ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1
		&& is_alpha(av[2][0]) && is_alpha(av[3][0]))
	{
		int i = 0;
		char *str = av[1];
		if (in_str(av[2][0], str))
		{
			while (str[i])
			{
				if (str[i] == av[2][0])
					write (1, av[3], 1);
				else
					write (1, &str[i], 1);
				i++;
			}
		}
		else
		{
			write (1, av[1], str_len);
		}
	}
	write(1, "\n", 1);
	return (0);
}
