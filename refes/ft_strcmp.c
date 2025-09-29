/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:07:28 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/26 19:09:27 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	result = (unsigned char) s1[i] - (unsigned char)s2[i];
	return (result);
}

/*#include<stdio.h>
int     main(void)
{
        char s1[] = "frase3";
        char s2[] = "frase5";
        printf("Resultado: %d\n", ft_strcmp(s1, s2));
}*/
