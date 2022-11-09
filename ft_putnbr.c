/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:50:04 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/24 10:50:04 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Pasar de tipo int a char y escribirlo.*/
int	ft_putnbr(int n)
{
	/* Establecemos x como nuestra variable inicial.*/
	int	x;

	/* La establecemos a 0.*/
	x = 0;

	/* Si n es igual al int menor existente, lo escribimos
	 * y devolvemos 11 que es el tamaño que este ocupa.*/
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	/* Si nos encontramos con un número negativo, escribimos
	 * el número en positivo y le añadimos el signo menos delante.*/
	else if (n < 0)
	{
		x += ft_putchar('-');
		x += ft_putnbr(-n);
	}
	/* Si es mayor que 10 lo desglosamos para quedarnos con el
	 * cociente y el resto y poder ir escribiendolo.*/
	else if (n >= 10)
	{
		x += ft_putnbr(n / 10);
		x += ft_putnbr(n % 10);
	}
	/* Por último, realizamos una conversión de int a char 
	 * sumando '0', puediendo hacerse también mediante el
	 * 0 en su posición de la tabla ascii decimal, el cual es 48.
	 * Es decur (n + 48).*/
	else
		x += ft_putchar(n + '0');
	
	/* Por ultimo devolvemos el valor de x.*/
	return (x);
}
