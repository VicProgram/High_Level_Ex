/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:07:39 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/11 16:48:39 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

int	main(void)
{
	int	x = 5;
	int	y = 10;

	printf("Antes del swap: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("Despues del swap: x = %d, y = %d\n", x, y);

	return (0);
}