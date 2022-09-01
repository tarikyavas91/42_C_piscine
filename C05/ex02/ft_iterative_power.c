/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:24:21 by tyavas            #+#    #+#             */
/*   Updated: 2022/08/03 14:30:35 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power-- > 1)
		result *= nb;
	return (result);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(3, -3));
	return (0);
} */