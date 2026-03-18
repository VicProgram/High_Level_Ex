/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:54:36 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/18 14:07:41 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int     *ft_range(int start, int end)
{
	int	i = 0, range = 0, *arr;

	range = abs((end - start)) + 1;
	arr = (int	*)malloc(sizeof(int) * range);
	if (!arr)
		return (NULL);
	while (i < range)
	{
		if (start < end)
		{
			arr[i] = start;
			printf("%d\n", arr[i]);
			start++;
			i++;
		}
		else
		{
			arr[i] = start;
			printf("%d\n", arr[i]);
			start--;
			i++;
		}
	}
	return (arr);
}
/* 
int	main(void)
{
	ft_range(-3, 0);
	return(0);
} 
	*/