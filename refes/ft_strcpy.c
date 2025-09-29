/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:02:39 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/26 18:15:14 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include<stdio.h>
int	main(void)
{
//	char	dest_1[]="12345"; //NULL --> ERROR: 
//	SIGSEGV(limites de memoria erroneos)
	char	dest_2[]="123456789012345"; //OK
//	char	dest_3[2]; // NULL --> ERROR: SEGFAULT 
//	(no hay espacio suficiente para copiar)
	char	dest_4[]="abcdefghijkl"; //OK
	char	src[]="1234567890";
//	printf("%s\n",ft_strcpy(dest_1,src));
	printf("%s\n",ft_strcpy(dest_2,src));
//	printf("%s\n",ft_strcpy(dest_3,src));
	printf("%s\n",ft_strcpy(dest_4,src));
	return (0);
}*/
