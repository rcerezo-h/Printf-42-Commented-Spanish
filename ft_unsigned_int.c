/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:54:36 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/11/03 13:15:21 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Esta función es la utilizada por el %u,
 * referido a unsigned. Lo que hace está función
 * es imprimir un numero sin signo.*/

int	ft_unsigned_int(unsigned int long num)
{
	/* Declaramos una variable de tipo entero.*/
	int	x;
	
	/* Establecemos la variable a 0, para luego darle
	 * su respectivo valor.*/
	x = 0;

	/* Si el número es mayor o igual que diez se realiza
	 * una recursividad y se llama así misma. Esta se va
	 * desglosando al dividirse entre diez, y va imprimiendo
	 * el valor gracias al resto. Un ejemplo es con el numero
	 * 123. Al ser mayor que diez entrariamos en el bucle y este
	 * sería desglosado quedandonos 12 y resto 3. El 3 es impreso
	 * y vuelve a desglosar el 12 ya que es mayor que diez, quedandonos
	 * un 1 y dejando el 2 y el 3 como resto. Este pasa a la siguien condición.*/
	if (num >= 10)
	{
		x += ft_unsigned_int(num / 10);
		x += ft_putchar("0123456789"[num % 10]);
	}

	/* Esta condición sirve para los números que se encuentran
	 * por debajo de 10 hasta 0, los cuales se imprimen usando
	 * el resto. Es decir que si nuestro número es un 5, simplemente
	 * sería impreso el 5. Si en la condición anterior despues de haber
	 * desglosado el 123 solo nos queda el uno, esta condición lo que 
	 * hace es que podamos imprimir ese 1 que nos falta, obteniendo
	 * por completo la cifra 123.*/
	else
		x += ft_putchar("0123456789"[num % 10]);
		
	/* Por ultimo se devuelve el valor de x.*/
	return (x);
}
