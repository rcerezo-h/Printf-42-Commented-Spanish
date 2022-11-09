/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bezero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:29:59 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/24 10:29:59 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Esta función escribe n bytes a cero en la cadena s.
 * Si n es 0, esta función no hará nada. Lo que se busca
 * es llenar cada posicion de la cadena tamaño n con un 0.*/

void	ft_bzero(void *s, size_t n)
{
	/* Mediante el uso de la funcion memset
	 * utilizamos un puntero que señala donde
	 * queremos escribir tantos ceros como tamaño
	 * tenga n.*/
	ft_memset(s, 0, n);
}
