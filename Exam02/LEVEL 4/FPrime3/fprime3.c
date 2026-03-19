/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:23:03 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/19 13:26:54 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int	main(int argc, char **argv)
{
	int	i = 1, nb = atoi(argv[1]);

	if (argc == 2)
	{
		if (nb == 1)
			printf("1");
		while (nb >= ++i)
		{
			if (nb % i == 0)
			{	printf("%d", i);
				if (nb == i)
					break;
				printf("*");
				nb /= i;
				i = 1;
			}
		}
	}
	printf("\n");
	return (0);
}