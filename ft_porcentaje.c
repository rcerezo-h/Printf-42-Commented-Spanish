/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   porcentaje.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:37:53 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/27 11:37:53 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Esta función se encarga de establecer lo que deben realizar los 
 * diferentes casos.*/

int	ft_porcentaje(char c, va_list args, int count)
{
	/* Si es %c, escribi caracteres.*/
	if (c == 'c')
		count = count + ft_putchar(va_arg(args, int));
	/* Si es % d o %i, escribe un número con signo.*/
	else if (c == 'd' || c == 'i')
		count = count + ft_putnbr(va_arg(args, int));
	/* Si es %u, escribe nuestro nunero sin signo.*/
	else if (c == 'u')
		count = count + ft_unsigned_int(va_arg(args, unsigned int));
	/* Si es %s, escribe una string.*/
	else if (c == 's')
		count = count + ft_putstr(va_arg(args, char *));
	/* Si es %p, escribe la dirección de memoria a la que apunta nuestro
	 * punterom sumandole +2 para que no cuente el 0x de la dirección 
	 * hexadecimal.*/
	else if (c == 'p')
	{
		count = (count + 2);
		count = count + ft_char_to_hexachar(va_arg(args, unsigned long int), 0);
	}
	/* Si es %x, convierte una string en hexadecimal en minusculas.*/
	else if (c == 'x')
		count = count + ft_char_to_hexachar(va_arg(args, unsigned int), 1);
	/* Si es %X, convierte una string en hexadecimal en mayusculas.*/
	else if (c == 'X')
		count = count + ft_char_to_hexachar(va_arg(args, unsigned int), 2);
	/* Si es un %, simplemente escribe %.*/
	else if (c == '%')
	{
		count++;
		write(1, "%", 1);
	}
	/* Devuelve la cantidad de caracteres que han sido convertidos.*/
	return (count);
}
