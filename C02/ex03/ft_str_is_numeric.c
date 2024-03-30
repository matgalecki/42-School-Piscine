/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:10:47 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/27 18:47:33 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		i = 0;
		while (str[i])
		{
			if (!('0' <= str[i] && str[i] <= '9'))
			{
				return (0);
			}
			i++;
		}
		return (1);
	}
}
/*
int main()
{
	printf("Value: %d", ft_str_is_numeric("123"));
	return (0);
}
*/
