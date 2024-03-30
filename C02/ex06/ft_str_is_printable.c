/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:09:36 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/27 19:28:29 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
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
			if (!(32 <= str[i] && str[i] <= 126))
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
	printf("Value: %d", ft_str_is_printable(" "));
	return (0);
}
*/
