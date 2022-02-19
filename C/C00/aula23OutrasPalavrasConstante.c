/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula23OutrasPalavrasConstante.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:45:09 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/09 17:46:47 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		fct(const int *tab, int size);

int main(void){

	int tab[] = {0,1,0,2,0,3,0,4,0,5,4,6};

	printf("%d\n", fct(tab, 12));
	return 0;
}

int		fct(const int *tab, int size){
	
	int i;
	int count;

	i = 0;
	count =0;
	while (i < size){
		
		if (tab[i] == 0){
			count++;
		}
		i++;
	}
	return count;
}