/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:24:11 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/06 19:36:41 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c);

void edges(int x, int y, int c, int);
void nodes(int x, int y, int c, int *e);


void rush(int x, int y);

int main(void){
	
	rush(4, 4);
	return(0);
	
}
