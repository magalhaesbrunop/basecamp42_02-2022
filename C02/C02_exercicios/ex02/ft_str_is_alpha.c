/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 01:50:22 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/19 02:05:40 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	printf("> Retorno da func: %d\n", ft_str_is_alpha("123"));
	printf("> Retorno da func: %d\n", ft_str_is_alpha("asd"));
	printf("> Retorno da func: %d\n", ft_str_is_alpha("asd asd"));
	printf("> Retorno da func: %d\n", ft_str_is_alpha("asd ASD"));
	printf("> Retorno da func: %d\n", ft_str_is_alpha("asdASD"));
	printf("> Retorno da func: %d\n", ft_str_is_alpha("asd 123"));
	return (0);
}

int ft_str_is_alpha(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if (((str[i] < 'A') || (str[i] > 'Z')) && ((str[i] < 'a') || (str[i] > 'z')))
		{
			return (0);	
		}
		i++;
	}
	return (1);
}