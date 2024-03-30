/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:08:55 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/08 17:22:40 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_size(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	total;

	len = 0;
	i = 0;
	total = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	total = len + (size - 1) * ft_strlen(sep);
	return (total + 1);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_str;
	int		len;
	int		i;

	if (size == 0)
	{
		final_str = (char *)malloc(sizeof(char));
		final_str[0] = '\0';
		return (final_str);
	}
	final_str = (char *)malloc(total_size(size, strs, sep));
	i = 0;
	len = 0;
	while (i < size -1)
	{
		ft_strcpy(strs[i], final_str + len);
		len = len + ft_strlen(strs[i]);
		ft_strcpy(sep, final_str + len);
		len = len + ft_strlen(sep);
		i++;
	}
	ft_strcpy(strs[i], final_str + len);
	return (final_str);
}
/*
#include <stdio.h>

int main()
{
    char    *strs[] = {"pierwszy", "drugi", "trzeci"};
    char    *sep = "|";
    char    *fin = ft_strjoin(3, strs, sep);

    printf("%s\n",fin);
    return (0);
}
*/
