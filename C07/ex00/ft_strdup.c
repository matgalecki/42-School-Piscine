/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:00:29 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/07 16:37:29 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
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

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = ft_strlen(src);
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (!(dest))
		return (NULL);
	return (ft_strcpy(src, dest));
}
/*
#include <stdio.h>

int main()
{
    printf("%s", ft_strdup("wjeidjiw"));
    return(0);
}
*/
