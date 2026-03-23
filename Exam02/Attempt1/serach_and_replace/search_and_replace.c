/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:32:34 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 11:38:25 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		char	a, b, *str;
		int	i = 0;

		str = argv[1];
		a = *argv[2];
		b = *argv[3];

		while (str[i] != '\0')
		{
			if (str[i] == a)
			{
				str[i] = b;
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}