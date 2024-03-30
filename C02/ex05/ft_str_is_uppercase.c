/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:58:34 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/27 19:06:21 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
	printf("Value: %d", ft_str_is_uppercase("jjia"));
	return (0);
}
*/
