/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:31:23 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 17:53:13 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoii(char	*str)
{
	int	res = 0, i = 0;

	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{	res = res * 10 + str[i] - '0';
			i++;
		}
	}
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		int	nb = ft_atoii(argv[1]);
		int	i = 1;
		while (i <= 9)
		{
			ft_putnbr(i);		
			write(1, " x ", 3);
			ft_putnbr(nb);		
			write(1, " = ", 3);
			ft_putnbr(i * nb);		
			write(1, "\n", 3);
			i++;
		}
	}
	return (0);
}