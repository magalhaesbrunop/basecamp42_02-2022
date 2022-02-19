/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula18FuncoesIntruducao.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:42:31 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/09 01:14:43 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void fct(int x){

	int i;
	
	i = 0;
	while (i < x){

		printf("%d ", i);
		i++;
	}
	printf("\nCoucou 42\n");
}

 int main(void){

	fct(20);
	return 0;
}
