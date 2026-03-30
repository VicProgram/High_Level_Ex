/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:57:51 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/30 13:19:24 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


/* void	ft_putnbr(int nb)
{
	char	res;
	if (nb > 9)
		ft_putnbr(nb / 10);
	res = nb % 10 + '0';
	write(1, &res, 1);
}

int	ft_atoi(char *str)
{
	int	res = 0;

	while (*str)
	{
		if ( *str >= '0' && *str <= '9')
			res = res * 10 + *str - '0';
		str++;
	}
	return (res);
}
int	is_prime(int nb)
{
	int	i = 3;

	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	while (i < nb/2)
	{
		if (nb % i == 0)
			return (0);
		i+=2;
	}
	return (1);
}
int	main(int argc, char ** argv)
{
	int	res = 0;
	
	if (argc == 2)
	{
		int	nb = ft_atoi(argv[1]);
		while (nb > 0)
		{
			if (is_prime(nb--))
				res += (nb + 1);
		}
		ft_putnbr(res);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
} */
int	ft_atoi(char *str)
{
	int	res = 0;
	
	while(*str)
	{
		if (*str >= '0' && *str <= '9')
			res = res * 10 + *str - '0';
		str++;
	}
	return (res);
}

int	is_prime(int	nb)
{
	int	i = 3;

	if ( nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	while (i < (nb /2))
	{
		if (nb % 1 == 0)
			return (0);
		i += 2;
	}
	return(1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	res = 0;
	if (argc == 2)
	{
		int	nb = ft_atoi(argv[1]);

		while (nb > 0)
		{
			if (is_prime(nb--))
				res += (nb + 1);
		}
		ft_putnbr(res);
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}