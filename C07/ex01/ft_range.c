/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:43:45 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/07 19:53:35 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*array;

	if (min >= max)
		return (NULL);
	array = (int *)malloc((max - min) * sizeof(int));
	i = min;
	j = 0;
	while (i < max)
	{
		array[j] = i;
		i++;
		j++;
	}
	return (array);
}
/*
#include <stdio.h>

int main()
{
    int i;

	i = 0;
	while (ft_range(12, 28)[i])
	{
		printf("%d\n", ft_range(12, 28)[i]);
		i++;
	}
	return (0);
}
*/
