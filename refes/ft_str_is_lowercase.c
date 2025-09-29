/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:40:04 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/16 16:00:59 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	type;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			type = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	type = 1;
	return (type);
}

/*int	main(void)
{
	char	str[20] = "afDdsa";
	int	result;
	result = ft_str_is_lowercase(str);
	printf("Resultado: %d\n", result);
	return (0);
}*/
