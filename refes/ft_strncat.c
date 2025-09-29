/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:18:08 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/26 19:19:14 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	dest[9]="12345";
	char    dest_0[9]="12345";
	char	src[4]="abc";
	char    src_0[4]="abc";
	unsigned int	nb = 2;	
	printf("Desarrollada: %s\n",ft_strncat(dest,src,nb));
	printf("Original: %s\n", strncat(dest_0,src_0,nb));
	return(0);
}*/
