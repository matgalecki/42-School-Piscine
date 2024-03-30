/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:57:52 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/23 19:19:06 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}
/*
int main()
{
	int x = 27;
	int y = 7;
	
	int *a = &x;
	int *b = &y;
	
	ft_ultimate_div_mod(a, b);
	
	printf("Result of dividing: x = %d, remider y = %d\n", *a, *b);
	
	return 0;
}
*/
