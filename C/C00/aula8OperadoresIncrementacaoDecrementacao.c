/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula8OperadoresIncrementacaoDecrementacao.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 13:52:18 by coder             #+#    #+#             */
/*   Updated: 2022/02/05 13:55:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int main(){

	int i;
	i = 42;
	i++;
	i++;
	printf("hello %d\n", i);

	i--;
	i--;
	printf("hello %d\n", i);

	++i;
	++i;
	printf("hello %d\n", i);
	
}