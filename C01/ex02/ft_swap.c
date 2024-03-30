/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:49:11 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/23 17:42:44 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*
int main() {

    int x = 5;
    int y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
*/
