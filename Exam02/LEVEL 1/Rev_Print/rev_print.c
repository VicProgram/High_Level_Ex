/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:49:16 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/11 16:57:17 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
			i++;
		while (i >= 0)
		{
			write(1, &str[i], 1);
			i--;
		}
		write(1, "\n", 1);
	}
	return (0);
}