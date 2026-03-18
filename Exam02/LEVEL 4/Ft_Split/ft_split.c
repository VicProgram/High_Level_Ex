/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 14:09:28 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/18 14:34:15 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, int	len)
{
	int	i = 0;

	while (i < len && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int	i = 0, k = 0, wc = 0;
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'|| str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char	**res = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'|| str[i] == '\n'))
			i++;
		int	j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			res[k] =(char *)malloc(sizeof(char) * ((i - j) + 1));
			if (!res)
				return (NULL);
			ft_strncpy(res[k++], &str[j], i - j);
		}
	}
	res[k] = NULL;
	return (res);
}

int	main(void)
{
	ft_split("hola como estamos");
	return (0);
}