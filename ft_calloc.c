/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:31:39 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/24 10:31:39 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* La función Calloc devuelve un puntero al espacio asignado.
 * Este asegura que el espacio de almacenamiento (expresado
 * en bytes) apuntado este preparado para almacenar todo tipo de objetos.
 * El retorno de esta función es un puntero tipo void
 * al bloque de memoria reservado. Si no puede reservar la memoria
 * se devuelve un puntero tipo NULL*/

void	*ft_calloc(size_t count, size_t size)
{
	/* Declaramos una variable puntero (*ptr)*/
	void	*ptr;

	/* El puntero usa malloc para reservar memoria*/
	ptr = malloc(size * count);
	/* Si no se ha podido reservar el puntero devuelve NULL*/
	if (!ptr)
		return (NULL);
	/* Si se ha podido reservar, utilizamos la funcion bzero
	 * para reservar el bloque de memoria, y escribimos en
	 * base al count y el size ceros, para poder cambiarlos
	 * posteriormente.*/
	ft_bzero(ptr, (count * size));
	return (ptr);
}
