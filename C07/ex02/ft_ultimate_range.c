/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:59:15 by tyavas            #+#    #+#             */
/*   Updated: 2022/08/08 19:34:13 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	my_range;
	int	i;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	my_range = max - min;
	buffer = (int *)malloc(my_range * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < my_range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (my_range);
}
/* #include <stdio.h>
int	main(void)
{
	int min;
	int max;
	int *tab;
	int size;
	int i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
		printf("%d,", tab[i++]);
}  */