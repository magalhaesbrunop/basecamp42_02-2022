/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:44:55 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/17 15:58:02 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int i;
	int size;
	int tab[8] = {100, 51, 72, 33, 54, 25, 76, 97};

	i = 0;
	size = 8;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int swap;

	i = 1;
	while (i < size)
	{
		j = i;
		swap = tab[i];
		printf("O valor  do swap = %d\n", swap);
		while ((j > 0) && (swap < tab[j - 1]))
		{
			printf("O valor de j = %d e valor do tab[j-1] = %d\n", j, tab[j - 1]);
			tab[j] = tab[j - 1];
			printf("O valor de tab[j] = %d\n", tab[j]);
			j--;
		}
		i++;
		tab[j] = swap;
		printf("O valor do tab[j] = %d\n\n", tab[j]);
	}
}