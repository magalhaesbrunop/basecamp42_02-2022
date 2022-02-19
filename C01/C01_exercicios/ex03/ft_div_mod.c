/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:08:58 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/15 12:45:23 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int *div;
	int *mod;
	int total_div;
	int total_mod;

	a = 4;
	b = 2;
	total_div = 0;
	total_mod = 0;
	div = &total_div;
	mod = &total_mod;
	ft_div_mod(a, b, div, mod);
	printf(" %d div %d = %d\n", a, b, *div);
	printf(" %d mod %d = %d\n", a, b, *mod);
	return(0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
