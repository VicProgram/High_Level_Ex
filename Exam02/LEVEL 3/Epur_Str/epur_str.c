/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 14:24:19 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/18 12:28:07 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char ** argv)
{
	char	*str;
	int	i = 0, j = 1;

	str = argv[1];
	if (argc == 2)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] != '\0')
		{
			if (str[i] != ' ' && str[i] != '\t')
			{
				if (!j)
					write (1, " ", 1);
				while (str[i] && (str[i] != ' ' && str[i] != '\t'))
				{
					write (1, &str[i], 1);
					i++;
				}
				j = 0;
			}
			else
				i++;
		}
	}
	else
		i++;
	write (1, "\n", 1);
	return (0);
}