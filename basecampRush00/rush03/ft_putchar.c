
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:33:30 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/06 12:33:44 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include<unistd.h>

void ft_putchat(char c){

	write(1, &c, 1);
	
}
