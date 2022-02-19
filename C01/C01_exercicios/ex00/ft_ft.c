/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:32:00 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/15 12:46:20 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int a;

	ft_ft(&a);
	printf("%d\n", a);
	return(0);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
