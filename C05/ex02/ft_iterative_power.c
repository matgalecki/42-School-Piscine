/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:34:44 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/05 11:35:55 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
int	main()
{
	printf("%d\n",ft_iterative_power(5, 2));
	printf("%d\n",ft_iterative_power(5, -2));
	printf("%d\n",ft_iterative_power(1, 0));
	printf("%d\n",ft_iterative_power(0, -5));
	printf("%d\n",ft_iterative_power(0, 0));
	printf("%d\n",ft_iterative_power(0, 1));
	printf("%d\n",ft_iterative_power(-1, -4));
	printf("%d\n",ft_iterative_power(-1, 0));
	printf("%d\n",ft_iterative_power(-1, 2));
	return (0);
}
*/