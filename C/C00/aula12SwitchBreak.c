/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula12SwitchBreak.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 20:19:32 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/07 20:33:28 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void){

	int a;
	a = 44;

	switch (a){

		case 41:
			printf("Hello world\n");
			break;
		case 42:
			printf("Hello Brasil\n");
			break;
		case 43:
			printf("Hello Guarapari\n");
			break;
		default:
			printf("Awesoooooome!!!!!!!\n");
			break;
	}
}