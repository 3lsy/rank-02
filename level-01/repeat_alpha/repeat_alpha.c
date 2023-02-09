/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echavez- <echavez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:39:54 by echavez-          #+#    #+#             */
/*   Updated: 2023/02/09 19:02:13 by echavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (2);
	return (0);
}

void putstr_alpha(char c, int n)
{
	while (n >= 0)
	{
		write(1, &c, 1);
		n--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;

		while (argv[1][i])
		{
			if (is_alpha(argv[1][i]) == 1)
				putstr_alpha(argv[1][i], argv[1][i] - 'a');
			else if (is_alpha(argv[1][i]) == 2)
				putstr_alpha(argv[1][i], argv[1][i] - 'A');
			else
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 2);
	}
	else {
		write(1, "\n", 2);
	}
	return (0);
}
