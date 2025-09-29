/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:55:47 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/16 15:31:25 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	type;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	char	str[20] = "65469";
	int result = ft_str_is_numeric(str);
	printf("Resultado: %d\n", result);
	return (0);
}*/
