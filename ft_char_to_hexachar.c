/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_hexachar.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:54:31 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/11/02 10:54:31 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
/* Convierte caracteres en caracteres de base 16.*/

int	ft_char_to_hexachar(unsigned long long int n, int pxx)
{
	int			size;
	static char	*str;

	/* Contamos la cantidad de caracteres de nuestro hexadecimal 
	 * mediante la función de haxalong y lo almacenamos en tamaño.*/
	size = ft_hexalong(n);

	/* Aqui realizamos una alocación de memoria para nuestra string
	 * mediante el uso de la función calloc y lo almacenamos dentro
	 * de nuestro puntero.*/
	str = ft_calloc(sizeof(char), (size + 1));
	if (n == 0)
		str[size - 1] = '0';

	/* Convierte nuestro hexadecimal en char para poder escribirlo.*/
	ft_select_hex(str, size -1, n, pxx);

	/* Si pxx == 0 entramos en el bucle. Este es para el caso %p.*/
	if (pxx == 0)
	{
		/* Si en nuestra string no existe contenido escribiremos 0x0.*/
		if (str[size - 1] == '0' && size - 1 == 0)
			ft_printf("%s", "0x0");
		/* Si existe contenido escribiremos 0x seguido de nuestra string.*/
		else
			ft_printf("0x%s", str);
	}
	/* Si nuestra string es %x o %X, escribiremos nuestra string*/
	else
		ft_printf("%s", str);
		
	/* Liberamos la memoria alocada.*/
	free(str);
	str = NULL;
	return (size);
}
