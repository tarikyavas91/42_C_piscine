/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:48:06 by tyavas            #+#    #+#             */
/*   Updated: 2022/08/03 14:30:55 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else
		return (-1);
}
/* #include <stdio.h>
int	main(void)
{
	int i = 0;
	int index = 5;
	while (i <= index)
		printf("%d_", ft_fibonacci(i++));
	
	return (0);
} */