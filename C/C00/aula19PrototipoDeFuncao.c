/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula19PrototipoDeFuncao.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:16:04 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/09 01:53:24 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ftc(void);
void ftc2(void);

int main(void){

	ftc();
	ftc2();
	return 0;
}

void ftc2(void){

	int i;

	i = 9;
	while(i >= 0){

		printf("%d", i);
		i--;
	}
	printf("\n");
}
