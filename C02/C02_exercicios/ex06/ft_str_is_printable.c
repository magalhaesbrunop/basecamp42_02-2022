/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:35:27 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/19 02:54:16 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	printf("> Retorno da func: %d\n", ft_str_is_printable("123"));
	printf("> Retorno da func: %d\n", ft_str_is_printable("ASD"));
	printf("> Retorno da func: %d\n", ft_str_is_printable("asd\nasd"));
	printf("> Retorno da func: %d\n", ft_str_is_printable("asd\tASD"));
	printf("> Retorno da func: %d\n", ft_str_is_printable("asdASD"));
	printf("> Retorno da func: %d\n", ft_str_is_printable("asd 123"));
	return (0);
}

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < ' ') || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
