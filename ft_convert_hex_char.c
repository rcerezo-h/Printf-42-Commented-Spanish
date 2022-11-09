/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex_char.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:09:48 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/11/02 11:09:48 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* Función auxiliar para la conversión de caracteres
 * de base 16 en char, estableciendo mayusculas y 
 * minusculas para los casos %p, %x y %X. Para %p y %x
 * necesitamos letras minusculas y para %X mayusculas.*/
char	ft_convert_hex_char(unsigned long long int n, int pxx)
{
	/* Si n es menor que 10 simplemente hacemos una conversion
	 * de int a char.*/
	if (n < 10)
		return (n + 48);
	
	/* Si n es mayor que 9, entramos en el siguiente bucle. Decimos
	 * 9 debido a que en una dirección de memoria, además de existir
	 * numeros, existen letras. Para %p y %x necesitamos escribirlas de 
	 * forma minuscula. Una vez hayamos escrito los numeros (n > 9),
	 * comenzamos a escribir las letras.*/
	if (n > 9)
	{
		/* Si pxx == 0 que es el caso del %p dentro de la función
		 * de porcentaje o si es pxx == 1, que es el caso de %x, 
		 * entramos en el bucle. En este sumamos 87 debido a que es
		 * la posición de la letra a minuscula dentro de la tabla
		 * ascii menos 10, que es la cantidad de numeros que no queremos
		 * tener en cuenta aquí. Por lo que su posición real es 97 pero
		 * restandole 10 se nos queda en 87. Otra forma parecida de hacerlo
		 * es escribiendo return (n - 10 + 'a').*/
		if (pxx == 0 || pxx == 1)
			return (n + 87);
		/* Esta es igual que la anterior pero en mayusculas. Aquí no
		 * es necesario poner pxx == 2, ya que se entiende por el else
		 * que es cualquiera que no sea ni pxx == 0 ni pxx == 1. 
		 * El 55 nos indica igual que el caso anterior la posición de la
		 * A mayuscula en la tabla ascii menos 10. Otra forma de verlo
		 * al igual que la anterior seria (n - 10 + 'A').*/
		else
			return (n + 55);
	}
	return (0);
}
