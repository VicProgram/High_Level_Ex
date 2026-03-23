/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:39:53 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 13:59:25 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// primero todo a minusculas

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}


//calculamos el numero
// si la base es 10 o menos solo sumamos '0'
// si no restamos 10 y sumamos 'a'
//
//si esta entre 0 y 9 y es menor o igual que max(long de  la base)
// return c - '0'
//si esta entre a y f y es menor o igual que max
//return 10 + c - 'a'
//sino -1

int	get_digit(char c, int str_base)
{
	int	max;
	if (str_base <= 10)
		max = str_base + '0';
	else
		max = str_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max)
		return (10 + c - 'a')
	else
		return (-1);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int	res = 0, sign = 1, digit;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		res = res * str_base;
		res = res +(digit * sign);
		++str;
	}	
	return (res);
}