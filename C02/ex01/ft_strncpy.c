/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:27:38 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/25 18:51:59 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char	*src = "smdladmk";
	char	dest[8];

	printf("Before using function ft_strncpy: src = %s, dest = %s\n", src, dest);
	
	ft_strncpy(dest, src, 2);

	printf("After  using function ft_strncpy:src = %s, dest = %s", src, dest);

	return(0);
}
*/
