/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula3PonteirosDesferenciacao.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:40:52 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/11 02:02:05 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int		a;
	int 	*ptr;
	int		**ptr2;
	int		***ptr3;
	int		****ptr4;
	int		*****ptr5;
	int		******ptr6;
	
	a = 42;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	printf("%d\n", ******ptr6);
	
	/*
	a = 56;
	ptr = &a;
	printf("%d\n", *ptr);
	*ptr = 78;
	printf("%d\n", a);
	*/
	return(0);
}