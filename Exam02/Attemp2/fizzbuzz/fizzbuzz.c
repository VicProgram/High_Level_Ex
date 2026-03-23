/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:10:52 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 13:30:32 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	printnb(int	i)
{
	char	c;

	if (i > 9)
		printnb(i / 10);
	c = i % 10 + '0';

	write(1, &c, 1);
}
int	main(void)
{
	int	i = 1;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			printnb(i);
		i++;
		write (1, "\n", 1);
	}
	return (0);
}