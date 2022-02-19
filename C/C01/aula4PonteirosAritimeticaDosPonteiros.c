/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula4PonteirosAritimeticaDosPonteiros.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:04:48 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/11 16:05:08 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int 	b;
	int 	a;
	int 	*ptr;

	b = 23;
	a = 12;
	ptr = &b;
	printf("%p\n", ptr);
	printf("%p\n", &b);
	printf("%p\n", ptr - 1);
	printf("%p\n", *(ptr - 1));
	*(ptr - 1) = 78;
	printf("%d\n", a);
	return (0);
}