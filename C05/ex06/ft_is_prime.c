/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:49:25 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/05 19:32:42 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
    printf("%d\n", ft_is_prime(1));
    printf("%d\n", ft_is_prime(2));
    printf("%d\n", ft_is_prime(3));
    printf("%d\n", ft_is_prime(4));
    printf("%d\n", ft_is_prime(5));
    printf("%d\n", ft_is_prime(6));
    printf("%d\n", ft_is_prime(7));
    printf("%d\n", ft_is_prime(10));
    printf("%d\n", ft_is_prime(11));
    printf("%d\n", ft_is_prime(13));
    printf("%d\n", ft_is_prime(15));
    printf("%d\n", ft_is_prime(-2));
    printf("%d\n", ft_is_prime(-1));
    printf("%d\n", ft_is_prime(-3));
}
*/
