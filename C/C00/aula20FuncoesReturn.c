/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula20FuncoesReturn.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 02:03:55 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/09 02:20:45 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ftc(void);

int main(void){

	int i;
	
	i = 0;
	printf("%d\n", i);

	i = ftc();
	printf("%d\n", i);
	return 0;
}