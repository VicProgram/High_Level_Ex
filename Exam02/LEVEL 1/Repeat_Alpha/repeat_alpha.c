/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:20:19 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/12 12:13:03 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int i)
{
	while (i > 0)
	{
		write (1 , &c, 1);
		i--;
	}
}
void	repeat_alpha(char	*str)
{
	char	c;
	int	i = 0;
	
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			ft_putchar(*str, *str + 1 - 'a');
		else if (c >= 'A' && c <= 'Z')
			ft_putchar(*str, *str + 1 - 'A');
		else
			write (1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc ==2)
		repeat_alpha(argv[1]);
	return (0);
}