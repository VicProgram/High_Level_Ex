/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 13:31:52 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/19 18:43:47 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_prime(int nb)
{
	int	i = 0;
	
	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_atoi(char *str)
{
	int	nb = 0, i = 0, sign = 1;

	while (str[i])
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}
void	ft_putnbr(int	nb)
{
	char	c;

	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write (1, &c, 1);
}
int	main(int argc, char ** argv)
{
	
	if (argc == 2)
	{
		int	sum = 0;
		int	i = 0;
		int	nb = ft_atoi(argv[1]);

		while (i <= nb)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	else 
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}