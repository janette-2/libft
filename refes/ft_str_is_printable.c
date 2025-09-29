/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:14:36 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/16 17:02:17 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	type;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			type = 1;
		}
		else
		{
			type = 0;
			return (type);
		}
		i++;
	}
	type = 1;
	return (type);
}

/*int	main(void)
{
	char str[20] = "dafÇñafdsf! ";
	printf("Resultado: %d\n", ft_str_is_printable(str));		
	return (0);
}*/
