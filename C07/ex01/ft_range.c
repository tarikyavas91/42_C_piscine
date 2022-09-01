/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:52:55 by tyavas            #+#    #+#             */
/*   Updated: 2022/08/08 19:34:03 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	my_range;
	int	i;
	int	*buffer;

	if (min >= max)
		return (0);
	my_range = max - min;
	buffer = (int *)malloc(my_range * sizeof(int));
	if (!buffer)
		return (0);
	i = 0;
	while (i < my_range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
/* #include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while (i < size)
		printf("%d, ", tab[i++]);
} */
