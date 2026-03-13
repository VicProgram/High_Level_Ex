/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:46:43 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/11 13:49:10 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	*str = "Hola, como estamos";

	ft_putstr(str);
	return(0);
}