/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:20:08 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/11 16:48:40 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(int	i)
{
	char	*str = "0123456789";
	if (i > 9)
		write_num(i / 10);
	
	write(1, &str[i % 10], 1);
}

int	main(void)
{
	int	i = 0;

	while (i < 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz\n", 9);
		else if ((i % 3 == 0))
			write(1, "fizz\n", 5);
		else if ((i % 5 == 0))
			write(1, "buzz\n", 5);
		else
			write_num(i);
		write (1, "\n", 1);
		i++;
	}
	return(0);
}