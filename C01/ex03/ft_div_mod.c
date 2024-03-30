/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:49:56 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/23 18:52:11 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a = 29;
	int b = 12;
	int result_div;
	int result_mod;
	
	ft_div_mod(a, b, &result_div, &result_mod);
	
	printf("Result of dividing %d by %d: %d\n", a, b, result_div);
	printf("Remider of the division of %d by %d: %d\n", a, b, result_mod);
	
	return 0;
}
*/
