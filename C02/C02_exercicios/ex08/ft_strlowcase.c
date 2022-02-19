/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 03:30:23 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/19 03:44:16 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char cc3[10] = "123";
	printf("> Retorno da func com \"123\": %s\n", ft_strlowcase(cc3));
	char cc4[10] = "ASD1ASD";
	printf("> Retorno da func com \"ASD1ASD\": %s\n", ft_strlowcase(cc4));
	char cc5[10] = "asdASD";
	printf("> Retorno da func com \"asdASD\": %s\n", ft_strlowcase(cc5));	
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}