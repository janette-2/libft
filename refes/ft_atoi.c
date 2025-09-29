/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <janrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:05:43 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/28 18:25:07 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ejemplos para entender el funcionamiento de la funcion original:
 * atoi("   42abc")     → 42  (espacios al inicio → bien)
 * atoi("+123")         → 123
 * atoi("-7test")       → -7
 * atoi("abc123")       → 0  ← empieza por letra
 * atoi("!42")          → 0  ← empieza por símbolo no válido
 * atoi("  +--42")      → 0   ← signos mal puestos(PERO AQUI SERÍA VÁLIDO)
 * LOS 0 EQUIVALEN A 'NULL' O MAL USO DE LA FUNCIÓN.
 * 
 *Cuando se usa isspace, se considera que todos estos caracteres se consideran
  espacios: ' ' y los ascii del 9 al 13, inclusives.
 * */
int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (minus % 2 != 0)
		result = -result;
	return (result);
}

/*#include<stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	int result = ft_atoi(argv[1]);
	printf("Resultado: %d\n", result);
	printf("ATOI: %d\n", atoi(argv[1]));
}*/
