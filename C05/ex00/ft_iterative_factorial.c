/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:04:40 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/01 13:46:36 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
int main()
{
    printf("%d\n", ft_iterative_factorial(4));
    printf("%d\n", ft_iterative_factorial(-1));
    printf("%d\n", ft_iterative_factorial(0));
    printf("%d\n", ft_iterative_factorial(1));
}
*/
