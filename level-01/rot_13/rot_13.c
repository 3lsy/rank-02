/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echavez- <echavez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:28:29 by echavez-          #+#    #+#             */
/*   Updated: 2023/02/09 20:34:57 by echavez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define ROT 13

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int is_alpha(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (2);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;
		char c;
		while (argv[1][i])
		{
			if (is_alpha(argv[1][i]) == 1){
				c = (((argv[1][i] - 'a') + ROT) % 26) + 'a';
				write(1, &c, 1);
			}
			else if (is_alpha(argv[1][i]) == 2){
				c = (((argv[1][i] - 'A') + ROT) % 26) + 'A';
				write(1, &c, 1);
			}
			else{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	ft_putstr("\n");
	return (0);
}
