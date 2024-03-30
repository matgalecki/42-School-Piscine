/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:51:17 by mgalecki          #+#    #+#             */
/*   Updated: 2024/01/25 13:20:56 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int	main()
{
	char	*src  = "asdasd";
	char	dest[6];

	printf("Before using function ft_strcpy: src = %s, dest = %s\n", src, dest);

	ft_strcpy(dest, src);

	printf("After using function ft_strcpy: src= %s, dest= %s", src, dest);
	
	return(0);
}
*/
