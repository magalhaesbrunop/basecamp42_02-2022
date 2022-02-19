/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:59:39 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/19 03:26:43 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char cc[10] = "123";
	printf("> Retorno da func com \"%s\": %s\n", cc, ft_strupcase(cc));
	char cc1[10] = "asd1asd";
	printf("> Retorno da func com \"asd1asd\": %s\n", ft_strupcase(cc1));
	char cc2[10] = "asdASD";
	printf("> Retorno da func com \"asdASD\": %s\n", ft_strupcase(cc2));
	return (0);
}

char *ft_strupcase(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if ((str[i] > 96) && (str[i] < 123))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}