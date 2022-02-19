/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:53:29 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/09 17:37:41 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//void 	fct2(void);

int	fct(const int *tab, int size){
	
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

	//int i;

	//i = 0;
	//printf("Coucou 42\n");
	//return 666;
	/*
	while(i < 10){

		printf("%d", i);
		i++;
	}
	printf("\n");*/
}