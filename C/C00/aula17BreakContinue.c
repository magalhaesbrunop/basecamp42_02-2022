/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula17BreakContinue.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:32:14 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/08 21:38:30 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void){

	int i;


	i = 0;
	while (i < 10){

		printf("%d", i);
		continue;
		i++;
		
	}
	printf("Estou fora");
	/*
	while (i < 6){

		j = 0;
		while (j < 6){

			printf("%d %d\n", i, j);

			break;
			j++;
		}
		i++;
	}
*/
/*	i = 0;
	while (i < 99){
		
		if(i == 66){
			
			printf("\nParei em %d\n", i);
			break;
		}

			printf("%d ", i);
			i++;
	}
	*/
	printf("\n");
	printf("I am out\n");	
}
