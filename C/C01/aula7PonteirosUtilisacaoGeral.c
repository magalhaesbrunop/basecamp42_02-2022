/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula7PonteirosUtilisacaoGeral.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:03:29 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/15 12:17:15 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void fct(int *a);

int main(void)
{
	//int *ptr;

	//ptr = 0;

	int a;

	a = 42;
	printf("%d\n", a);
	fct(&a);
	printf("%d\n", a);

	return(0);
}

void fct(int *a)
{
	*a = *a + 42;
}