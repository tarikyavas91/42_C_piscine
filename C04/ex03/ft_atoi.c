/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:35:09 by tyavas            #+#    #+#             */
/*   Updated: 2022/08/02 19:47:15 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* sign : işaret değer. 
result : 10 ile çarparak arttırma.*/
int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	n;

	result = 0;
	n = 0;
	sign = 1;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == ' ')
		n++;
	while (str[n] == '-' || str[n] == '+')
		if (str[n++] == '-')
			sign *= -1;
	while (str[n] >= '0' && str[n] <= '9')
		result = result * 10 + str[n++] - '0';
	return (result * sign);
}

/* #include <stdio.h>
int	main(void)
{
	char dizi[] = "---+1234ab567";
	printf("%d", ft_atoi(dizi));
	return (0);
} */