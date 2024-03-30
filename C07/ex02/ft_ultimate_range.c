/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgalecki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:56:51 by mgalecki          #+#    #+#             */
/*   Updated: 2024/02/08 12:07:24 by mgalecki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (-1);
	i = min;
	j = 0;
	while (i < max)
	{
		array[j] = i;
		j++;
		i++;
	}
	*range = array;
	return (j);
}
/*
#include <stdio.h>

int	main()
{
	int	*range;

	printf("%d\n", ft_ultimate_range(&range, 4, 65));
	return (0);
}
*/
