/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 01:38:46 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/19 01:20:54 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src);

int main(void)
{
	char c1[15] = "Teste do ex 00";
	char c2[15];
	printf("> String original: %s\n", c1);
	printf("> Retorno da func: %s\n", ft_strcpy(c2, c1));
	printf("> String copia: %s\n", c2);
	return (0);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
	
}