/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:44:24 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/30 13:00:19 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char a) // Display char
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb) // Change int to char 
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*
int	main (void)
{
	ft_putnbr(-2147483648);
	return (0);
}
*/