/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:40:08 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/27 18:06:07 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
			if (!('A' <= str[i] && str[i] <= 'Z'))
			{
				if (!('a' <= str[i] && str[i] <= 'z'))
				{
					return (0);
				}
			}
			i++;
		}
		return (1);
	}
}
/*
int main()
{
	printf("Value: %d", ft_str_is_alpha("nmalsd"));
	return (0);
}
*/
