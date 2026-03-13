/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:58:23 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/11 19:10:32 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	if (argc == 2)
	{
		char	*str = argv[1];
		
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = ((str[i] - 'a' + 13) % 26 + 'a');
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = ((str[i] - 'A' + 13) % 26 + 'A');
			write (1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}