/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:47:18 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/05 11:38:35 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb -1);
		return (result);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
    printf("%d\n", ft_recursive_factorial(4));
    printf("%d\n", ft_recursive_factorial(-1));
    printf("%d\n", ft_recursive_factorial(0));
    printf("%d\n", ft_recursive_factorial(1));
    printf("%d\n", ft_recursive_factorial(2));
    printf("%d\n", ft_recursive_factorial(-1));
    printf("%d\n", ft_recursive_factorial(-2));
    printf("%d\n", ft_recursive_factorial(3));
}
*/
