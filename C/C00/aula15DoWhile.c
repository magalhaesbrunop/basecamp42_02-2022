/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula15DoWhile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:44:44 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/08 15:59:38 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void){

	int i;
	i = 0;
	
	do {

		printf("%d", i);
		i++;
	} 
	while (i < 10);
	
	printf("\n");
	
	/*
	while (i < 10){
		
		printf("%d", i);
		i++;
	}
	printf("\n");
	*/
}
