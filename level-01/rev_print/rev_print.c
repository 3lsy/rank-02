/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echavez- <echavez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:05:16 by echavez-          #+#    #+#             */
/*   Updated: 2023/02/09 19:23:13 by echavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putstr(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = 0;
		while (argv[1][n])
			n++;
		int j = n - 1;
		while (j >= 0)
		{
			write(1, &argv[1][j], 1);
			j--;
		}
	}
	putstr("\n");
	return (0);
}
