/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula11CondicionaisIfElseIfEIf.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:54:07 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/07 20:17:30 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void){
	
	int a;

	a = 42;

	if(a > 40){
		
		if(a == 42){

			printf("toto\n");
		}
		else{

			printf("tata\n");
		}
	}
	else{

		printf("coucou\n");
	}
	
/*
	if(a == 42){

		printf("Hello 42\n");
	}
	else if(a == 24){

		printf("Você não é a 42\n");
	}
	else{

		printf("O ministério da magia caiu e o ministro da magia está morto.\n");
	}
	*/
}