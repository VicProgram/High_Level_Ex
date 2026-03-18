/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:44:59 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/18 14:07:43 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int	range = 0, i = 0;
	int	*arr;

	range = (end - start + 1);

	arr = malloc (sizeof (int) * range);
	if (!arr)
		return (NULL);
	while (range > 0)
	{
		arr[i] = end;
		printf("%d", arr[i]);
		i++;
		end--;
		range--;
	}
	return (arr);
}

int	main(void)
{
	ft_rrange(-1, 13);
	return (0);
}