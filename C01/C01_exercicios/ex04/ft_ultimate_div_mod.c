/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:43:11 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/15 13:08:50 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int a;
	int b;
	int fnbr;
	int snbr;
	
	fnbr = 7;
	a = fnbr;
	snbr = 3;
	b = snbr;
	ft_ultimate_div_mod(&fnbr, &snbr);
	printf("%d div %d = %d\n", a, b, fnbr);
	printf("%d mod %d = %d\n", a, b, snbr);
	return(0);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int total_div;
	int total_mod;
	
	total_div = *a / *b;
	total_mod = *a % *b;
	*a = total_div;
	*b = total_mod;
}