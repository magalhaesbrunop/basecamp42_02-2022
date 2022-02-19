/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:06:21 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/15 20:14:47 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int i;
	int size;
	int tab[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	i = 0;
	size = 8;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;
	int swap;

	i = 0;
	j = size / 2;
	k = size - 1;
	while (i < j)
	{
		swap = tab[i];
		tab[i] = tab[k];
		tab[k] = swap;
		i++;
		k--;		
	}
}
