/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:17:43 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/26 18:28:21 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* #include <string.h>
#include<stdio.h>
int	main(void)
{
	char	src[6]="abcde";
	char	dest[6]="12345";
	int	n = 2;
	printf("Original: %s\n",strncpy(dest,src,n));
        printf("Mio: %s\n",ft_strncpy(dest,src,n));   	
	return (0);
}*/
