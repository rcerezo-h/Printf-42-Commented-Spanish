/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:45:22 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/24 10:45:22 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Escribe una string. */
int	ft_putstr(char *s)
{
	int	x;

/* Cuando nuestra string sea nula deberemos escribir (null)
 * entre parentesis y en minuscula.*/
	if (!s)
		return (ft_putstr("(null)"));
	x = 0;
	/* Mientras que el puntero en x no llegue al final
	 * escribiremos en nuestra string. Iremos sumando para
	 * que el bucle vaya avanzando.*/
	while (s[x] != '\0')
	{
		ft_putchar(s[x]);
		x++;
	}
	/* Por ultimo devolvemos el valor de nuestra string.*/
	return (x);
}
