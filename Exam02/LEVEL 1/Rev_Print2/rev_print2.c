/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:02:15 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/19 17:06:18 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char **argv)
{
	int i = 0;
	if ( argc == 2)
	{
		char *str = argv[1];

		while (str[i] != '\0')
			i++;
		while (i >= 0)
		{
			write (1, &str[i], 1);
			i--;
		}	
	}
	write(1, "\n", 1);
	return (0);
}