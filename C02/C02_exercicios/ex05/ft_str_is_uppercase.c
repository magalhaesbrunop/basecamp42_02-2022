/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:30:36 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/19 02:34:16 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
	printf("> Retorno da func: %d\n", ft_str_is_uppercase("123"));
	printf("> Retorno da func: %d\n", ft_str_is_uppercase("ASD"));
	printf("> Retorno da func: %d\n", ft_str_is_uppercase("asd asd"));
	printf("> Retorno da func: %d\n", ft_str_is_uppercase("asd ASD"));
	printf("> Retorno da func: %d\n", ft_str_is_uppercase("asdASD"));
	printf("> Retorno da func: %d\n", ft_str_is_uppercase("asd 123"));
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
	
}