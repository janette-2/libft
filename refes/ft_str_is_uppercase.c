/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:02:17 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/16 16:11:51 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	type;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str[20] = "SFDffdFA";
	printf("Resultado: %d\n", ft_str_is_uppercase(str));
	return (0);
}*/
