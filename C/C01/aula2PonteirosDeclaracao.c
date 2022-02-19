/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula2PonteirosDeclaracao.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 01:11:54 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/11 01:38:49 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int		a;
	int		b;
	char	c;
	int 	*ptr;
	int 	*ptr2;
	int 	**ptr3;

	ptr = &a;
	printf("%p\n", ptr);
	ptr = &b;
	printf("%p\n", ptr);
	ptr2 = ptr;
	ptr3 = ptr;
	printf("%p\n", ptr3);
	return(0);
}