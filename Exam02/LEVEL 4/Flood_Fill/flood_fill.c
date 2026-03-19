/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:45:24 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/03/19 13:10:58 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

//recuerda hacer el .h bien!

void	fill(char **tab, t_point size, t_point cur, char target)
{
	//comprobar si estamos dentro de tab
	if (cur.x < 0 || cur.y < 0|| cur.x >= size.x || cur.y >= size.y)
		return;
	//comprobar si es el caracter a cambiar
	if (tab[cur.x][cur.y] != target)
		return;
	//decir por que caracter se sustituye el target
	tab[cur.x][cur.y] = 'F';

	fill(tab, size, (t_point){cur.x - 1, cur.y}, target);
	fill(tab, size, (t_point){cur.x + 1, cur.y}, target);
	fill(tab, size, (t_point){cur.x, cur.y -1}, target);
	fill(tab, size, (t_point){cur.x, cur.y +1}, target);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{	
	//averiguar el caracter
	char	target = tab[begin.y][begin.x];
	//llamada normal a funcion de relleno
	fill(tab, size, begin, target);
}