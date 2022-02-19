/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula9OperadoresBinarios.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:07:32 by coder             #+#    #+#             */
/*   Updated: 2022/02/05 17:47:58 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "secret.h" //\não funciona

int main(){

	char c;
	char c2;
	
	c = 12;
	c2 = 6;
	
	aff_bin(c);
	printf("~\n");
	aff_bin(c);
	//aff_bin(~c); O output é a negação de c
	//aff_bin(!c); O se o valor de entrada é diverence de zero então outoput será zero, mas se a entrada é zero então o output será, por exemplo 000001
	//aff_bin(c << 1); Desloca 1 bit para a esquerda
	//aff_bin(c >> 1); Desloca 1 bit para a direita
	//aff_bin(c << 2); Desloca 2 bit para a esquerda
	//aff_bin(c >> 2); Desloca 2 bit para a direita
}





