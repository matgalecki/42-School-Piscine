/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:06:08 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/06 16:26:36 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		else if (i > 46340)
			return (0);
		i++;
	}
	return (0);
}
/*
int main()
{
    printf("%d\n", ft_sqrt(2147395600));
    printf("%d\n", ft_sqrt(-2147395600));
    printf("%d\n", ft_sqrt(1));
    printf("%d\n", ft_sqrt(-1));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(11));
    printf("%d\n", ft_sqrt(25));
    printf("%d\n", ft_sqrt(-25));
    printf("%d\n", ft_sqrt(879337412));
    printf("%d\n", ft_sqrt(1612843417));
    return (0);
}
*/