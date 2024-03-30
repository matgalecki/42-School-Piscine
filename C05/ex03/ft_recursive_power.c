/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:20:25 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/05 15:41:29 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if ((power == 0 && nb == 0) || power == 0)
		return (1);
	else
	{
		result = nb * (ft_recursive_power(nb, power - 1));
		return (result);
	}
}
/*
int main()
{
    printf("%d\n",ft_recursive_power(5 ,2));
    printf("%d\n",ft_recursive_power(5 ,0));
    printf("%d\n",ft_recursive_power(5 ,-1));
    printf("%d\n",ft_recursive_power(0 ,2));
    printf("%d\n",ft_recursive_power(0 ,0));
    printf("%d\n",ft_recursive_power(0 ,-1));
    printf("%d\n",ft_recursive_power(-1 ,2));
    printf("%d\n",ft_recursive_power(-2 ,-1));
    printf("%d\n",ft_recursive_power(-1 ,-0));
    return (0);
}
*/