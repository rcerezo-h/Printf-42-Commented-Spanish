/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:23:43 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/24 10:23:43 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Copia el valor de c (convertido a unsigned char)
 * en cada uno de los primeros n caracteres en el 
 * puntero apuntado por s. La función retorna el 
 * valor de s. Ej si el tamaño es 4 y se escribe
 * hola buenas, dará $$$$ buenas.*/

void	*ft_memset(void *b, int c, size_t len)
{
	/* Declaramos dos variables, la primera un
	 * puntero tipo char sin signo quees nuestra
	 * variable auxiliar de *b y la segunda
	 * un contador tipo tamaño.*/
	unsigned char	*ptr;
	size_t			i;

	/* Establecemos el contador a 0 para poder empezar
	 * y metemos el puntero *b dentro de la variable 
	 * auxiliar.*/
	i = 0;
	ptr = b;

	/* Mientras que el contador sea menor que la longitud
	 * se realiza un casteo para que c pase a ser un 
	 * unsigned char y se mete dentro del puntero en i.
	 * Este sigue avanzando hasta que alcance el tamaño maximo.*/
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	/* Por ultimo se devuelve el valor de b.
	 * b esta relleno de tantos c como tamaño
	 * tenga len.*/
	return (b);
}
