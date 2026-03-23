/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 19:04:14 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/23 19:11:19 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	indi(char c, int str_base)
{
	char	*base = "0123456789abcdef";
	int	i = 0;

	if (c >= 'A' && c <= 'Z')
		c += 32;
	while (base[i])
	{
		if (c == base[i] && i < str_base)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res = 0, sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while(*str)
	{
		if (indi(*str, str_base) == -1)
			break;
		res = res * str_base + indi(*str, str_base);
		str++;
	}
	return (res * sign);
}