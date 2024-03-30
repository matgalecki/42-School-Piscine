/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:50:47 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/27 18:56:28 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
			if (!('a' <= str[i] && str[i] <= 'z'))
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
	printf("Value: %d", ft_str_is_lowercase("asxa"));
	return (0);
}
*/
