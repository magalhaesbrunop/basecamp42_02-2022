/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula1PonteirosMalloc.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:44:01 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/12 18:32:02 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*get()
{
	int	*tab;
	
	tab = malloc(sizeof(*tab) * 9);
	return (tab);
}

int	*set()
{
	int lol;

	lol = 78;
	return (0);
}

int main(void)
{
	int	*ptr;

	ptr = get();
	*ptr = 12;
	printf("%p\n", ptr);
	printf("%d\n", *ptr);
	set();
	printf("%d\n", *ptr);
	printf("%p\n", ptr);
	free(ptr);
	printf("%p\n", ptr);
	printf("%d\n", *ptr);	
	return(0);
}
