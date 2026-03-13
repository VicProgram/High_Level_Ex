/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:50:51 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/13 13:06:32 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int	nb1, nb2;

		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[3]);

		if (argv[2][0] == '+')
			printf("%d", (nb1 + nb2));
		else if (argv[2][0] == '-')
			printf("%d", (nb1 - nb2));
		else if (argv[2][0] == '*')
			printf("%d", (nb1 * nb2));
		else if (argv[2][0] == '/')
			printf("%d", (nb1 / nb2));
		else if (argv[2][0] == '%')
			printf("%d", (nb1 % nb2));
	}
	printf("\n");
	return (0);
}