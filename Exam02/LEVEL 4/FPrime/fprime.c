/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:12:19 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/18 17:32:51 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
int	is_prime(int nb)
{
	int i = 3;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	int	nb;

	nb = atoi(argv[1]);
	if (argc == 2)
	{
		while()



	}
	write (1, '\n', 1);
	return (0);
}