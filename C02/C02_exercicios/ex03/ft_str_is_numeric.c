/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 02:07:15 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/19 02:22:25 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	printf("> Retorno da func: %d\n", ft_str_is_numeric("123"));
	printf("> Retorno da func: %d\n", ft_str_is_numeric("asd"));
	printf("> Retorno da func: %d\n", ft_str_is_numeric("asd asd"));
	printf("> Retorno da func: %d\n", ft_str_is_numeric("asd ASD"));
	printf("> Retorno da func: %d\n", ft_str_is_numeric("asdASD"));
	printf("> Retorno da func: %d\n", ft_str_is_numeric("asd 123"));
}

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}