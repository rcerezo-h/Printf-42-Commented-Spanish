/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexalong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:21:07 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/27 10:21:07 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*Cuenta la cantidad de caracteres de un hexadecimal.*/
int	ft_hexalong(unsigned long n)
{
	/* Creamos nuestro contador y lo establecemos a uno
	 * debido a que si el numéro existe, ya contamos con un digito.
	 * Minimo va a devolver siempre 1 porque ya existe dicho dígito.
	 * Si n fuera 15, ya devolvería un 0 por lo que es necesario
	 * establecer la x a 1.*/
	int	x;

	x = 1;
	/* Mientras sea mayor que 15, añadimos 1 y sacamos el cociente
	 * del hexadecial, por eso dividimos entre 16.*/
	while (n > 15)
	{
		x++;
		n = (n / 16);
	}
	/* Por ultimo devolvemos el valor de x, que será
	 * la cantidad de caracteres que existen.*/
	return (x);
}
