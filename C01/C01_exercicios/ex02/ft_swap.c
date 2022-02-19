/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:26:19 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/15 12:45:51 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int nbr1;
	int nbr2;
	int *ptr1;
	int *ptr2;
	
	nbr1 = 5;
	nbr2 = 7;
	ptr1 = &nbr1;
	ptr2 = &nbr2;
	printf("%d %d\n", nbr1, nbr2);
	ft_swap(ptr1, ptr2);
	printf("%d %d\n", *ptr1, *ptr2);
	return(0);
}

void	ft_swap(int *a, int *b)
{
	int swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
}