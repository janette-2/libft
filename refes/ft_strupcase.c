/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:32:19 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/26 18:39:16 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The difference between a - A = 32.
 * And that replicates through all letters. */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int     main(void)
{
	        char  str[] = "adfAB'Ff0 -";
	        printf("%s\n", ft_strupcase(str));
	        return (0);
}*/
