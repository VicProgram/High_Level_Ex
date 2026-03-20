/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitlaizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:55:20 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/20 13:59:51 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	capita(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc < 2)
		write(1, "\n", 1);
	else
		{
			while (argv[i])
			{
				capita(argv[i]);
				i++;
			}
		}
	return (0);
}