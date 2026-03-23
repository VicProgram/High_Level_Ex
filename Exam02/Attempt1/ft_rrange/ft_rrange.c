/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:45:38 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 19:15:13 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int	*res, range = 0, i = 0;

	if (end >= start)
		range = (end - start) + 1;
	else
		range =(start - end) + 1;
	res = (int *)malloc(sizeof (int) * range);
	if (!res)
		return (NULL);
	i = 0;
	while (i < range)
	{
		res[i] = end;
		if (end > start)
			end--;
		else if (start > end)
			end++;
		i++;
	}
	return (res);
}