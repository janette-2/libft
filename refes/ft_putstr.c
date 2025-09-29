/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: janrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:51:38 by janrodri          #+#    #+#             */
/*   Updated: 2025/07/27 18:52:39 by janrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	str[20] = "Frase";
	ft_putstr(str); //Compile with 'gcc test.c -o test' and after run ./test
	return (0);
}*/
