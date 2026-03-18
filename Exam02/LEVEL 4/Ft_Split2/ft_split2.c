/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:41:17 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/18 17:35:46 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


static char	*ft_strcpy(char *s1, char *s2, int len)
{
	int i = 0;

	while (i < len)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char    **ft_split(char *str)
{
	char	**res;
	int	i = 0, j = 0, k = 0, wc = 0;

	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	res = (char **)malloc(sizeof (char *) * wc + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			res[k] = malloc(sizeof (char *) * ((i - j) + 1));
			if (!res)
				return (NULL);
			ft_strcpy(res[k++], &str[j], i - j);
		}
	}
	res[k] = NULL;
	return (res);
}


// Prototipo de tu función
char    **ft_split(char *str);

int main(int argc, char **argv)
{
    char    **result;
    int     i;

    // Si pasas un argumento por terminal lo usa, si no, usa una frase por defecto
    char *test_str = (argc > 1) ? argv[1] : "   Hola   mundo 42\tmadrid\ncon espacios   ";

    printf("Cadena original: \"%s\"\n", test_str);
    
    result = ft_split(test_str);
    
    if (!result)
    {
        printf("Error: malloc falló o el split devolvió NULL.\n");
        return (1);
    }

    printf("Resultado del split:\n");
    i = 0;
    while (result[i] != NULL)
    {
        printf("Palabra [%d]: \"%s\"\n", i, result[i]);
        free(result[i]); // Liberamos cada palabra
        i++;
    }
    free(result); // Liberamos el array de punteros
    
    return (0);
}