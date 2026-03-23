/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:54:16 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 19:14:33 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	char 	*res;
	int	len = 0, nb = nbr;

	if (nb <= 0)
		len++;
	while (nb)
	{
		nb /= 10;
		len++;
	}
	res = malloc(sizeof(char) * len +1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[--len] = (nbr % 10) + '0';
		nbr /= 10; 
	}
	return (res);
}

int		main(void)
{
	char	*res;

	// Caso 1: Cero
	res = ft_itoa(0);
	printf("Input: 0          | Result: %s\n", res);
	free(res);

	// Caso 2: Positivo estándar
	res = ft_itoa(12345);
	printf("Input: 12345      | Result: %s\n", res);
	free(res);

	// Caso 3: Negativo estándar
	res = ft_itoa(-987);
	printf("Input: -987       | Result: %s\n", res);
	free(res);

	// Caso 4: Valor máximo de un int (2147483647)
	res = ft_itoa(2147483647);
	printf("Input: 2147483647 | Result: %s\n", res);
	free(res);

	// Caso 5: Valor mínimo de un int (-2147483648)
	// Este es el que suele fallar si no gestionas bien el long o el signo
	res = ft_itoa(-2147483648);
	printf("Input: -2147483648| Result: %s\n", res);
	free(res);

	return (0);
}