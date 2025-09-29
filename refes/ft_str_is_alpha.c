/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:55:45 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/16 13:24:11 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	type;
	int	i;

	type = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
			type = 1;
		}
		else
		{
			return (0);
		}
	}
	return (type);
}

/*int	main(void)
{
	char	str[15] = "Fraseejemplo";
	int	result;
	result = ft_str_is_alpha(str);
	printf("Result: %d\n", result);
	return (0);
}*/
