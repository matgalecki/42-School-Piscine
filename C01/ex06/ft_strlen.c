/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:53:01 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/24 17:56:48 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	unsigned int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
/*
int main()
{
        printf("String has %d characters", ft_strlen("sddsds"));
        return(0);
}
*/
