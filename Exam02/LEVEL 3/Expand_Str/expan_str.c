/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expan_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:38:42 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/16 18:56:06 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	char	*str;
	int	i = 0, j = 0;

	if (argc == 2)
	{
		str = argv[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while(str[i])
		{
			if ((str[i] == ' ' || str[i] == '\t'))
				j = 1;
			else
			{
				if (j == 1)
					write (1, "   ", 3);
				j = 0;
				write (1, &str[i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}