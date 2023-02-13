/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echavez- <echavez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:36:19 by echavez-          #+#    #+#             */
/*   Updated: 2023/02/13 15:07:53 by echavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else if ('A' <= c && c <= 'Z')
		return (2);
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		char *str = av[1];
		char count;
		char c;
		while(str[i])
		{
			if (is_alpha(str[i]) == 1)
			{
				count = str[i] - 'a';
				c = 'z' - count;
				write(1, &c, 1);
			}
			else if (is_alpha(str[i]) == 2)
			{
				count = str[i] - 'A';
				c = 'Z' - count;
				write(1, &c, 1);
			}
			else
				write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
