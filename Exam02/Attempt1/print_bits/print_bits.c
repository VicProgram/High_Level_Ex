/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:40:01 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 19:15:45 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int 	i = 8;

	while (i-- > 0)
	{
		unsigned char c = (octet >> i & 1) + '0';
		write (1 , &c, 1);
	}
}

int main()
{
	print_bits(2);
	return (0);
}