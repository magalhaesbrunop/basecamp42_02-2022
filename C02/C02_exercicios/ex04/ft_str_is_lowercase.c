/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:23:52 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/19 02:28:26 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	printf("> Retorno da func: %d\n", ft_str_is_lowercase("123"));
	printf("> Retorno da func: %d\n", ft_str_is_lowercase("asd"));
	printf("> Retorno da func: %d\n", ft_str_is_lowercase("asd asd"));
	printf("> Retorno da func: %d\n", ft_str_is_lowercase("asd ASD"));
	printf("> Retorno da func: %d\n", ft_str_is_lowercase("asdASD"));
	printf("> Retorno da func: %d\n", ft_str_is_lowercase("asd 123"));
	return (0);
}

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}