/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 18:26:57 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 18:56:52 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* 
>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$> */
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int	i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i++;
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			{	
				write (1, &argv[1][i], 1);
				i++;
			}
			write (1, " ", 1);
		}
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			write(1, &argv[1][i++], 1 );
	}
	return (0);
}