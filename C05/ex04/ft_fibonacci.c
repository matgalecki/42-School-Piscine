/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:02:59 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/05 17:05:05 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else if (index > 2)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci (index -2);
		return (result);
	}
	else
		return (-1);
}
/*
int main()
{
    printf("%d\n", ft_fibonacci(-3));
    printf("%d\n", ft_fibonacci(-2));
    printf("%d\n", ft_fibonacci(-1));
    printf("%d\n", ft_fibonacci(0));
    printf("%d\n", ft_fibonacci(2));
    printf("%d\n", ft_fibonacci(3));
    printf("%d\n", ft_fibonacci(4));
    printf("%d\n", ft_fibonacci(5));
    printf("%d\n", ft_fibonacci(6));
    printf("%d\n", ft_fibonacci(7));
    printf("%d\n", ft_fibonacci(8));
    printf("%d\n", ft_fibonacci(9));
    return (0);
}
*/
