/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:00:19 by tyavas            #+#    #+#             */
/*   Updated: 2022/08/03 14:31:04 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	while (n * n <= nb && nb > 0)
	{
		if (n * n == nb)
			return (n);
		else if (n >= 46341)
			return (0);
		n++;
	}
	return (0);
}
/* #include <stdio.h>
int   main(void)
{
   printf("%d", ft_sqrt(4));
   return (0);
} */