/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:31:47 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 13:38:59 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		int	nb1 = atoi(argv[1]);
		int	nb2 = atoi(argv[3]);
		char op = *argv[2];
		if (op == '+')
			printf("%d", (nb1 + nb2));
		else if (op == '-')
			printf("%d", (nb1 - nb2));
		else if (op == '*')
			printf("%d", (nb1 * nb2));
		else if (op == '/')
			printf("%d", (nb1 / nb2));
		else if (op == '%')
			printf("%d", (nb1 % nb2));
	}
	printf("\n");
	return(0);
}