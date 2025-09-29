/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:25:25 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/27 18:49:20 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[20] = "Fraseejemplo"; //12
	printf("Caracteres: %d\n", ft_strlen(str));
	return (0);
}*/
