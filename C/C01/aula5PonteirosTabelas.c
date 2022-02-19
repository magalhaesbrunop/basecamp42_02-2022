/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula5PonteirosTabelas.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:13:49 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/11 16:44:36 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int		tab[3];
	int		*tab2[2];

	tab[2] = 145;
	tab2[1] = tab;
	//tab2[1][2] = 18;
	//*(tab2[1] + 2) = 18;
	*(*(tab2 + 1) + 2) = 18;
	printf("%d\n", *(tab + 2));
	
	/*
	int		a;
	int		tab[3];
	int		*ptr;
	
	tab[0] = 478;
	tab[1] = 145;
	tab[2] = 666;
	// tab[1] == *(tab + 1);
	// tab[n] == *(tab + n);
	printf("%d\n", *(tab));
	printf("%d\n", *(tab + 1));
	printf("%d\n", *(tab + 2));
	*/
	return(0);
}