/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula10OperadoresDeComparacao.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 19:02:15 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/07 19:24:29 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<stdio.h>

int main (){

	int a;
	int b;
	
	a = 2;
	b = 2;

	printf("%d\n", (a == b) && (a != b));

}
