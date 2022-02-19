/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aula8PonteirosVoid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpereira <bpereira@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:34:41 by bpereira          #+#    #+#             */
/*   Updated: 2022/02/15 00:41:28 by bpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	void	*ptr;
	int		*ptr_i;
	char	*ptr_c;

	ptr = ptr_c;
	ptr = &ptr;
	ptr = ptr_i;
	ptr_c = ptr;
	
	return(0);
}