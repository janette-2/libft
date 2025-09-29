/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:05:15 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/20 21:11:25 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*concat;

	concat = dest;
	while (*concat != '\0')
	{
		concat++;
	}
	while (*src != '\0')
	{
		*concat = *src;
		concat++;
		src++;
	}
	*concat = '\0';
	return (dest);
}

/*#include <stdio.h>
int     main(void)
{
        char dest[20] = "Inicio";
        char src[20] = "Final";
        printf("%s\n", ft_strcat(dest, src));
        return (0);
}*/
