/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:27:16 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/18 14:07:44 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int	nb)
{
	char 	res;

	if (nb > 9)
		ft_putnbr(nb / 10);
	res = (nb % 10) + '0';
	write(1, &res, 1);
}

static int	ft_atoi(char *str)
{
	int res = 0, sign = 1;

	while (*str == ' ' ||(*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

int	is_prime(int nb)
{
	int	i = 2;
	
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


int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	res = 0, nb = 0;
		nb = ft_atoi(argv[1]);
		while (nb > 0)
		{
			if (is_prime(nb--))
				res = (res + 1);
		}
		ft_putnbr(res);
	}
	if (argc != 2)
		ft_putnbr(0);
	write (1, "\n", 1);
	return (0);
}