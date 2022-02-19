/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula21FuncoesArgumentos.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:35:22 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/09 13:03:24 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

float fct(int, float);

int main(void){

	float i;
	float x = 0.5;
	
	i = fct(42, x);
	printf("%f\n", i);
	printf("%f\n", x);
	return 0;
}

float fct(int a, float x){

	x = 0.8;
	
	printf("Coucou 42\n");
	return a * x;
}
